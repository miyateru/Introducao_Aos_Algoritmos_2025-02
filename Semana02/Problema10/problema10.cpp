//IAlg - Semana 02 - Problema 10
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	int dias;
	float valorLiquido;
	
	ifstream arquivoEntra ("entrada");
	arquivoEntra >> dias;
	
	valorLiquido = (dias*60*0.92);
	ofstream arquivoSaida ("saida");
	arquivoSaida << "R$ " << valorLiquido;
	
	arquivoEntra.close();
	arquivoSaida.close();
	
	return 0;
}
