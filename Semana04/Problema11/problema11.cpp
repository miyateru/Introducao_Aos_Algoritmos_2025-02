/*
IAlg - Semana 04 - Problema 11
* 
Calculo regra de trasicao para aposentadoria
30% sobre o tempo que faltaria para atingir aposentadoria
Regra de transição so é valída para mais de 15 anos de trabalho.
Idade minima para outros casos varia entre 62 e 65
*/
#include <iostream>

using namespace std;

int main(){
	int genero, idade;
	float idadeAposen, pedagio, tTrabalho;
	
	cin >> genero >> idade >> tTrabalho;
	
	//Mulheres: 0
	if (genero == 0) {
		//30 anos de trabalho
		if (tTrabalho > 15) {
			pedagio = 30.0 - tTrabalho;
			idadeAposen = idade + pedagio*1.3;
		}
		else {
			//Idade minima
			idadeAposen = 62;
		}
	//Homens: 1
	}
	else if (genero == 1) {
		//35 anos de trabalho
		if (tTrabalho > 20) {
			pedagio = 35.0 - tTrabalho;
			idadeAposen = idade + pedagio*1.3;
		}
		else {
			//Idade minima
			idadeAposen = 65;
		}
	}
	else {
		cout << "Caso indefinido." << endl;
		return 0;
	}
	
	cout << idadeAposen << endl;
	
	return 0;
}
