//IAlg - Semana 03 - Problema 01
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string nomeArquivo, conteudo;
	
	cin >> nomeArquivo;
	ifstream arquivo (nomeArquivo);
	arquivo >> conteudo;
	cout << conteudo;
	
	arquivo.close();
	return 0;
}
