//IAlg - Semana 03 - Problema 11
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	float horas, minutos;
	float horasMin;
	
	cin >> horas >> minutos;
	horasMin = horas*60;
	
	ofstream saida("saida.txt");
	saida << horasMin << endl;
	saida << horasMin+minutos << endl;
	saida << (horasMin+minutos)*60 << endl;
	saida.close();
	
	return 0;
}
