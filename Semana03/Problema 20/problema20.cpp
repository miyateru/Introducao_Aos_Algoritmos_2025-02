//IAlg - Semana 02 - Problema 20
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	const int rendimentoM2 = 3;
	const int litrosLata = 18;
	int areaPinturaM, qLata;
	float valorLata;
	
	ifstream entrada("entrada.txt");
	entrada >> areaPinturaM >> valorLata;
	entrada.close();
	
	qLata = ceil(ceil(areaPinturaM/rendimentoM2)/litrosLata);
	
	ofstream saida("saida.txt");
	saida << fixed << setprecision(2);
	saida << qLata << endl;
	saida << qLata*valorLata << endl;
	saida.close();
	
	return 0;
}
