// IAlg - Semana 02 - Problema 09 
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main(){
	const int WMetro = 18;
	double area, dimensao1, dimensao2;	
	ofstream arquivo("potencia.txt");
	
	cin >> dimensao1 >> dimensao2;
	
	area = dimensao1 * dimensao2;
	arquivo << fixed << setprecision(1);
	arquivo << area << "m2" << endl;
	arquivo << area*WMetro << "W" << endl;
	
	arquivo.close();
	return 0;
}
