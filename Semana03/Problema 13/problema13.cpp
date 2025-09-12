//IAlg - Semana 02 - Problema 13
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	float qSaque, q100, q50, q10;
	
	cin >> qSaque;
	q100 = floor(qSaque/100);
	qSaque -= q100*100;
	q50 = floor((qSaque) / 50);
	qSaque -= q50*50;
	q10 = floor((qSaque) / 10);
	
	ofstream arquivo("saque.txt");
	arquivo << q100 << endl << q50 << endl << q10 << endl;
	arquivo.close();
	
	return 0;
}
