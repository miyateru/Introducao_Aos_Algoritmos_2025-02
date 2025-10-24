//IAlg - Semana 07 - Problema 15
#include <iostream>

using namespace std;

void lerVetor(int vetor[], int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }
}

bool contemNumero(int vetor[], int tamVetor, int numero) {
    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] == numero) {
            return true;
        }
    }
    return false;
}

void imprimirUniaoVetores(int vetorA[], int tamVetorA, int vetorB[], int tamVetorB) {
    for (int i = 0; i < tamVetorA; i++) {
        cout << vetorA[i] << " ";
    }
    for (int i = 0; i < tamVetorB; i++) {
        if (!contemNumero(vetorA, tamVetorA, vetorB[i])) {
            cout << vetorB[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int tamVetor = 5;
    int vetorA[tamVetor] = {};
    int vetorB[tamVetor] = {};

    lerVetor(vetorA, tamVetor);
    lerVetor(vetorB, tamVetor);

    imprimirUniaoVetores(vetorA, tamVetor, vetorB, tamVetor);

    return 0;
}
