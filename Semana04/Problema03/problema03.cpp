//IAlg - Semana 04 - Problema 03
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    const float erro_float = 0.00001;
    //n -> notas
    float nLab = 0.0, nAval = 0.0, nExam = 0.0, mediaPon = 0.0;
    //p -> pesos
    float pLab = 2, pAval = 3, pExam = 5;
    
    cin >> nLab >> nAval >> nExam;
    //Acha e imprime a mediaPon ponderada.
    mediaPon = ((nLab * pLab) + (nAval * pAval) + (nExam * pExam)) / (pLab + pAval + pExam);
    cout << mediaPon << endl;
    
    //Acha o conceito
    if (((mediaPon > 8) or (abs(8 - mediaPon) <= erro_float)) and ((mediaPon < 10) or ((abs(10 - mediaPon) <= erro_float)))) {
        cout << "A" << endl;
    } else if (((mediaPon > 7) or (abs(7 - mediaPon) <= erro_float)) and (mediaPon < 8)) {
        cout << "B" << endl;
    } else if (((mediaPon > 6) or (abs(6 - mediaPon) <= erro_float)) and (mediaPon < 7)) {
        cout << "C" << endl;
    } else if (((mediaPon > 5) or (abs(5 - mediaPon) <= erro_float)) and (mediaPon < 6)) {
        cout << "D" << endl;
    } else if (((mediaPon > 0) or (abs(mediaPon) <= erro_float)) and (mediaPon < 5)) {
        cout << "E" << endl;
    } else {
        cout << "ERRO: Valor de conceito não existe" << endl;
        return 1;
    }
    
    return 0;
}

