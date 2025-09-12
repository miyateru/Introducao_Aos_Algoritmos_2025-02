//IAlg - Semana 5 - Problema 05
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	int maiorEstoque = 0, qProduto = 0, qProduzida = 0,
	    qVendida = 0, qTotal = 0;
	string nomeProd = "", nomeMaiorEstq = "";
	
	ifstream entrada("estoque.txt");
	if (entrada) {
		entrada >> qProduto;
		while (qProduto > 0) {
			entrada >> nomeProd >> qProduzida >> qVendida;
			qTotal = qProduzida - qVendida;
			
			if (qTotal > maiorEstoque) {
				maiorEstoque = qTotal;
				nomeMaiorEstq = nomeProd;
			}
			
			cout << nomeProd << " " << qTotal;
			if (qTotal < 50) {
				cout << " BAIXO ESTOQUE";
			}
			cout << endl;
			
			qProduto--;
		}
		
		cout << nomeMaiorEstq << " " << maiorEstoque << endl;
	}
	entrada.close();
	
	return 0;
}
