//IAlg - Semana 05 - Problema 01
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int maior = 0, maiorSeg = 0, menor = 0, menorSeg = 0, num = 0;
	
	ifstream entrada("entrada.txt");
	
	if (entrada) {
		entrada >> num;
		maior = menor = num;
		
		while (entrada >> num) {
			if (num > maior) {
				maior = num;
			}
			if (num < menor) {
				menor = num;
			}
		}
		
		entrada.clear ();
		entrada.seekg (0, entrada.beg);

		maiorSeg = menor;
		menorSeg = maior;
		while (entrada >> num) {
			if ((num < maior) and (num > maiorSeg)) {
				maiorSeg = num;
			}
			if ((num > menor) and (num < menorSeg)) {
				menorSeg = num;
			}
		}

		cout << menor << endl << menorSeg << endl;
		cout << maior << endl << maiorSeg << endl;
	}
	else {
		cout << "Arquivo não localizado: \"entrada.txt\"";
	}
	
	entrada.close();
	
	return 0;
}
