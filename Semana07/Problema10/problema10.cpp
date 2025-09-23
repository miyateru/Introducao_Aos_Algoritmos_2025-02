//IAlg - Semana 07 - Problema 10
#include <cmath>
#include <iostream>

using namespace std;

int encontraMaior(int* vetor, int tamVetor) {
    int maior = vetor[0];

    for (int i = 1; i < tamVetor; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    return maior;
}

int main() {
    int const tamVetor {15};
    int vetor[15] = {};
    
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    int maior = encontraMaior(vetor, tamVetor);
    
    for (int i = 0; i < tamVetor; i++) {
        cout << (vetor[i] / maior) << " ";
    }
    cout << endl;

    return 0;
}
