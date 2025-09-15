//IAlg - Semana 03 - Problema 22
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	const float valorCaixa = 13.50, valorTrufa = 2.50, 
	valorJujuba = 1.5, valorDrop = 1.0, valorBala = 0.25;
	float valorTotal, valorInicial;
	int qCaixa, qTrufa, qJujuba, qDrop, qBala;
	
	cin >> valorTotal;
	valorInicial = valorTotal;
	
	qCaixa = valorTotal/valorCaixa;
	valorTotal -= qCaixa*valorCaixa;
	qTrufa = valorTotal/valorTrufa;
	valorTotal -= qTrufa*valorTrufa;
	qJujuba = valorTotal/valorJujuba;
	valorTotal -= qJujuba*valorJujuba;
	qDrop = valorTotal/valorDrop;
	valorTotal -= qDrop*valorDrop;
	qBala = valorTotal/valorBala;
	valorTotal -= qBala*valorBala;
	
	ofstream doces("doces.txt");
	doces << fixed << setprecision(2);
	doces << valorInicial - valorTotal << endl;
	doces << qCaixa << endl << qTrufa << endl 
		  << qJujuba << endl << qDrop << endl
		  << qBala << endl;
	doces.close();
	
	return 0;
}
