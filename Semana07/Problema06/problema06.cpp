//IAlg - Semana 07 - Problema 06
#include <iostream>

using namespace std;

void lerVetorInt(int* vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }
    
    return;
}

bool primo(int numero) {
    bool ePrimo = true;

    if (numero <= 0) {
        ePrimo = false;
        return ePrimo;
    }
    
    for (int i = 2; numero > i; i++) {
        if (numero % i == 0) {
            ePrimo = false;
        }
    } 
    
    return ePrimo;
}

int main() {
    const int tamVetor = 9;
    int numeros[tamVetor] = {};
    
    lerVetorInt(numeros, tamVetor);

    for (int i = 0; i < tamVetor; i++) {
        int numVetor = numeros[i];
        int numPrimo = primo(numVetor);

        if (numPrimo) {
            cout << numVetor << " " << i << endl;
        }
    }

    return 0;
}
