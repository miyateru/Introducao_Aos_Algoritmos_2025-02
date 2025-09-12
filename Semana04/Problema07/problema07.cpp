//IAlg - Semana 04 - Problema 07
#include <iostream>

using namespace std;

int main(){
	int codiProd, paisProd;
	float precoImpos, pesoG, pesoKg, precoBruto, precoTotal;
	
	cin >> codiProd >> pesoKg >> paisProd;
	
	pesoG = pesoKg * 1000;
	
	//Preco Bruto
	if ((codiProd >= 1) and (codiProd <= 4)) {
		precoBruto = pesoG * 10;
	}
	else if ((codiProd >= 5) and (codiProd <= 7)) {
		precoBruto = pesoG * 25;
	}
	else if ((codiProd >= 8) and (codiProd <= 10)) {
		precoBruto = pesoG * 35;
	}
	
	//Preco do imposto
	if (paisProd == 1) {
		//0%
		precoImpos = 0.0;
	}
	else if (paisProd == 2) {
		//15%
		precoImpos = precoBruto * 0.15;
	}
	else if (paisProd == 3) {
		//25%
		precoImpos = precoBruto * 0.25;
	}
	
	precoTotal = precoBruto + precoImpos;
	
	cout << pesoG << endl << precoBruto << endl 
		 << precoImpos << endl << precoTotal << endl;
	
	return 0;
}

x

