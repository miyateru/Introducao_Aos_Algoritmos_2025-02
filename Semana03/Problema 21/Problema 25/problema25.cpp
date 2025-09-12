//IAlg - Semana 02 - Problema 25
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	float valorVista, qPrestacoes, valorAntes;
	
	ifstream dados("venda.txt");
	dados >> valorVista >> qPrestacoes;
	dados.close();
	
	valorAntes = valorVista * 1.1;
	
	ofstream saida("cliente.txt");
	saida << fixed << setprecision(2);
	saida << valorAntes << endl;
	saida << valorAntes/qPrestacoes << endl;
	saida << (valorAntes*0.9)/qPrestacoes << endl;
	saida << valorAntes*0.9 << endl;
	saida.close();
	
	return 0;
}
