//IAlg - Semana 06 - Problema 10
#include <iostream>
#include <iomanip>

using namespace std;

float soma(int N) {
	float soma = 0;
	
	if (N <= 0) {
		return 0.0;
	}
	
	while (N) {
		soma += N*(N+1.0)/(N+3.0);
		N--;
	}
	
	return soma;
}

int main() {
	int parcelas = 0;
	
	cin >> parcelas;
	cout << fixed << setprecision(2);
	cout << soma(parcelas) << endl;
	
	return 0;
}
