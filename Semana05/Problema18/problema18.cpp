//IALg - Semana 05 - Problema18
#include <fstream>
#include <iostream>

using namespace std;

bool primo(int n) {
	int i = 2;
	
	while (i < n) {
		if (n % i == 0) {
			return false;
		}
		i++;
	}
	return true;
}
	
void primosAte(int n) {
	ofstream saida("saida");
	int qPrimos = 0;
	int i = 2;
	
	while (qPrimos < n) {
		if (primo(i)) {
			saida << i << endl;
			qPrimos++;
		}
		i++;
	}
}

int main() {
	int num = 0;

	cin >> num;
	primosAte(num);

	return 0;
}
