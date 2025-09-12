//IAlg - Semana 05 - Problema 11
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int classificados = 0, dado, lMin, lMax;
	ifstream dados("dados.txt");
	
	if (dados) {
		dados >> lMin >> lMax;
		while (dados >> dado) {
			if ((dado >= lMin) and (dado <= lMax)) {
				classificados++;
			}
		}
		cout << classificados << endl;
	}
	else {
		cout << "Arquivo nao encontrado" << endl;
	}
	
	dados.close();
	return 0;
}
