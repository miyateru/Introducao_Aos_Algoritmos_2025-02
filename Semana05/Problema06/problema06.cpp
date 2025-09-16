//IAlg - Semana 05 - Problema 06
//Show da Anitta	
#include <fstream>
#include <iostream>

using namespace std;

int main() {
	char categoria = ' ';
	int diaCompra = 0;
	float valIngresso = 0.0, valTotal = 0.0;
	
	ifstream entrada("ingresso.txt");
	
	if(entrada) {
		entrada >> valIngresso;
		while (entrada >> diaCompra >> categoria) {
			if ((diaCompra >= 6) and (diaCompra <= 13)) {
				//Durante esse periodo estudantes tem 15% de desconto
				if (categoria == 'E') {
					valTotal += valIngresso * 0.85;
				}
				//Durante esse periodo adultos tem 10% de desconto
				else if (categoria == 'A') {
					valTotal += valIngresso * 0.9;
				}
			}
			else if ((diaCompra >= 14) and (diaCompra <= 24)) {
				//Durante esse periodo estudantes tem 10% de desconto
				if (categoria == 'E') {
					valTotal += valIngresso * 0.90;
				}
				//Durante esse periodo adultos tem 5% de desconto
				else if (categoria == 'A') {
					valTotal += valIngresso * 0.95;
				}
			}
			else {
				valTotal += valIngresso;
			}
		}
		cout << valTotal << endl;
	}
	
	entrada.close();
	
	return 0;
}
