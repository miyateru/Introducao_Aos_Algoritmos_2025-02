//IAlg - Semana 03 - Problema 14
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	const float taxa = 0.38/100;
	float saldo, salarioMensal, valorCheque1, valorCheque2;
	
	ifstream entrada("entrada.txt");
	entrada >> salarioMensal >> valorCheque1 >> valorCheque2;
	entrada.close();
	saldo = salarioMensal;
	saldo -= valorCheque1*(1+taxa);
	saldo -= valorCheque2*(1+taxa);
	cout << saldo << endl;
	
	return 0;
}
