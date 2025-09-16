//IAlg - Semana 07 - Problema 11
#include <iostream>

using namespace std;

void imprimiPiramide(int &tamanho) {
	for (int i = 0; i < tamanho + 1; i++) {
		for (int j = 0; j < i; j++) {
			if (j % 2 == 0) {
				cout << "*";
			}
			else {
				cout << "=";
			}
		}
		if (i < tamanho) {
			cout << endl;
		}
	}
}

int main() {
	int num = 0;
	
	cin >> num;
	imprimiPiramide(num);
	
	return 0;
}
