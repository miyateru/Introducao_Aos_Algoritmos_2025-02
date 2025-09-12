//IAlg - Semana 04 - Problema 10
#include <iostream>

using namespace std;

int main(){
	char tipoMons;
	int qMons, tHosp;
	//Quartos -> Centena = andar | Dezena = corredor | unidade = quarto
	int andar, corredor, quarto, nQuarto;

	cin >> tipoMons >> qMons >> tHosp;
	
	//Andar por tipo de monstro
	if ((tipoMons == 'z') or (tipoMons == 'm')) {
		andar = 1;
	} else if ((tipoMons == 'l') or (tipoMons == 'd')) {
		andar = 2;
	} else if ((tipoMons == 'h') or (tipoMons == 's')) {
		andar = 3;
	} else if ((tipoMons == 'v') or (tipoMons == 'f')) {
		andar = 4;
	}
	
	//Corredor por quantidade no quarto
	if (qMons == 1) {
		corredor = 1;
	} else if (qMons == 2) {
		corredor = 2;
	} else {
		corredor = 3;
	} 
	
	//Quarto por tempo
	if ((tHosp >= 1) and (tHosp <= 2)) {
		quarto = 1;
	} else if ((tHosp >= 3) and (tHosp <= 4)) {
		quarto = 2;
	} else if ((tHosp >= 5) and (tHosp <= 6)) {
		quarto = 3;
	} else {
		quarto = 4;
	}
	
	nQuarto = 0;
	nQuarto += andar*100 + corredor*10 + quarto;
	
	cout << nQuarto;

	return 0;
}
