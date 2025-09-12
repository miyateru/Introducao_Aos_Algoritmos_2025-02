// IAlg - Semana 08 - Problema 08
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	float custoEspetaculo, precoConvite;
	int numMinConvites;
	ifstream entrada ("teatro.txt");
	ofstream saida ("convite.txt");
	
	entrada >> custoEspetaculo >> precoConvite;
	numMinConvites = ceil(custoEspetaculo/precoConvite);
	cout << numMinConvites << endl;
	saida << numMinConvites;
	
	entrada.close();
	saida.close();
	return 0;
}
