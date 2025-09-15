//IAlg - Semana 02 - Problema 15
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	double entrada;
	ofstream saida ("saida.txt");
	
	cin >> entrada;
	saida << setprecision(8);
	saida << trunc(entrada) << endl;
	saida << entrada - trunc(entrada) << endl;
	saida << floor(entrada) << endl;
	saida << ceil(entrada) << endl;
	saida << round(entrada) << endl;
	
	saida.close();
	return 0;
}
