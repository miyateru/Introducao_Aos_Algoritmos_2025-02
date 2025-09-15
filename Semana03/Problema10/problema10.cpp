//IAlg - Semana 03 - Problema 10
#include <cmath>
#include <fstream>

using namespace std;

int main(){
	float cmDegrau, mAltura;
	
	ifstream entrada("entrada.txt");
	entrada >> cmDegrau >> mAltura;
	entrada.close();
	ofstream saida("degraus.txt");
	saida << ceil((mAltura*100)/cmDegrau) << endl;
	saida.close();
	
	return 0;
}
