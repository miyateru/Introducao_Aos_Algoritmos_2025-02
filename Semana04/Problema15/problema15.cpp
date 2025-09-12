//IAlg - Semana 04 - Problema 15
#include <iostream>

using namespace std;

int main() {
    //Recebe valores
    int cargaLim = 0, qDisCavalo = 0, qDisGalinha = 0, qDisVaca = 0;

    cin >> cargaLim >> qDisCavalo >> qDisVaca >> qDisGalinha;
    
    //Acha maximo para cada animal
    int qCavalo = 0, qGalinha = 0, qVaca = 0;
    int pCavalo = 250, pGalinha = 2, pVaca = 150;

    // Maximo galinhas
    if (cargaLim > pGalinha) {
        qGalinha = cargaLim / pGalinha;
        if (qGalinha >= qDisGalinha) {
            qGalinha = qDisGalinha;
        }
        cargaLim -= qGalinha * pGalinha;
        qDisGalinha -= qGalinha;
    }

    // Maximo vacas
    if (cargaLim > pVaca) {
        qVaca = cargaLim / pVaca;
        if (qVaca >= qDisVaca) {
            qVaca = qDisVaca;
        }
        cargaLim -= qVaca * pVaca;
        qDisVaca -= qVaca;
    }

    // Maximo cavalos
    if (cargaLim > pCavalo) {
        qCavalo = cargaLim / pCavalo;
        if (qCavalo >= qDisCavalo) {
            qCavalo = qDisCavalo;
        }
        cargaLim -= qCavalo * pCavalo;
        qDisCavalo -= qCavalo;
    }

    cout << qDisCavalo << endl << qDisVaca << endl << qDisGalinha << endl;

    return 0;
}
