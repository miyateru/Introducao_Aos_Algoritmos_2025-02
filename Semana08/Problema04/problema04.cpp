// IAlg - Semana 08 - Problema 04
#include <iostream>

using namespace std;

void lerVetor(int *vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    return;
}

int main() {
    // NumMarc -> Numero delimitador de limite da ordem inversa
    int numMarc1 {};
    int numMarc2 {};
    int tamVetor {};

    cin >> tamVetor;
    int *vetor = new int[tamVetor];
    lerVetor(vetor, tamVetor);
    cin >> numMarc1 >> numMarc2;

    bool imprimir = false;
    for (int i = tamVetor - 1; i > 0; i--) {
        bool marc = (vetor[i] == numMarc1) or (vetor[i] == numMarc2);

        if (marc) {
            imprimir = !imprimir;
        }
        if (imprimir and !marc) {
            cout << vetor[i] << " ";
        }
    }
    cout << endl;

    delete[] vetor;
    return 0;
}
