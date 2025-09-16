//IAlg - Semana 06 - Problema 12
//Numero de Euler
#include <iostream>

using namespace std;

int fatorial(int n) {
	int resultado = 1;
	
	if (n < 0) {
		return 0;
	}
	
	for (int i = 1; i < n + 1; i++) {
		resultado *= i;
	}	
	return resultado;
}

double numeroEuler(int numeroTermos) {
	double resultado = 0;
	
	for (int i = 0; i < numeroTermos; i++) {
		resultado += 1.0/fatorial(i);
	}
	
	return resultado;
}

int main() {
	int numTermos = 0;
	
	cin >> numTermos;
	cout << numeroEuler(numTermos);
	
	return 0;
}
