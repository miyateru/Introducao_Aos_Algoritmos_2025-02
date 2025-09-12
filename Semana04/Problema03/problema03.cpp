//IAlg - Semana 04 - Problema 03
#include <iostream>

using namespace std;

int main() {
	//n -> notas
	float nLab, nAval, nExam, mediaPon;
	//p -> pesos
	float pLab = 2, pAval = 3, pExam = 5;
	
	cin >> nLab >> nAval >> nExam;
	//Acha e imprime a mediaPon ponderada.
	mediaPon = (nLab*pLab + nAval*pAval + nExam*pExam)
	/(pLab + pAval + pExam);
	cout << mediaPon << endl;
	
	//Acha o conceito
	if ((mediaPon >= 8) and (mediaPon <= 10)) {
		cout << "A" << endl;
	} else if ((mediaPon >= 7) and (mediaPon < 8)) {
		cout << "B" << endl;
	} else if ((mediaPon >= 6) and (mediaPon < 7)) {
		cout << "C" << endl;
	} else if ((mediaPon >= 5) and (mediaPon < 6)) {
		cout << "D" << endl;
	} else if ((mediaPon >= 0) and (mediaPon < 5)) {
		cout << "E" << endl;
	} else {
		cout << "ERRO: Valor de conceito não existe" << endl;
		return 1;
	}
	
	return 0;
}

