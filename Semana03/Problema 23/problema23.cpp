//IAlg - Semana 02 - Problema 23
#include <fstream>
#include <iostream> // Test

using namespace std;

int main(){
	int n, m, n1, n2, n3, n4, n5, n6, m1, m2, m3, m4, m5;
	
	ifstream entrada("entrada.txt");
	entrada >> n;
	entrada.close();
	
	n1 = n / 100000;
	n2 = (n - n1*100000) / 10000;
	n3 = (n - n1*100000 - n2*10000) / 1000;
	n4 = (n - n1*100000 - n2*10000 - n3*1000) / 100;
	n5 = (n - n1*100000 - n2*10000 - n3*1000 - n4*100) / 10;
	n6 = (n - n1*100000 - n2*10000 - n3*1000 - n4*100 - n5*10);
	
	m1 = n1 / n2;
	m2 = n2 / n3;
	m3 = n3 / n4;
	m4 = n4 / n5;
	m5 = n5 / n6;
	
	m = (m1 * 10000) + (m2 * 1000) + (m3 * 100) + (m4 * 10) + (m5);
	
	ofstream saida("saida.txt");
	saida << m;
	saida.close();
	
	return 0;
}
