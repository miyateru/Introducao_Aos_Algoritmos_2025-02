//IAlg - Semana 07 - Problema 11
#include <iostream>

using namespace std;

float encontraMaior(float* vetor, int tamVetor) {
    float maior = vetor[0];

    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}

float encontraMenor(float* vetor, int tamVetor) {
    float menor = vetor[0];

    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    return menor;
}

float encontraMaiorSeg(float* vetor, int tamVetor) {
    float maior = encontraMaior(vetor, tamVetor);
    float maiorSeg = encontraMenor(vetor, tamVetor);

    for (int i = 0; i < tamVetor; i++) {
        if ((vetor[i] > maiorSeg) and (vetor[i] < maior)) {
            maiorSeg = vetor[i];
        }
    }

    return maiorSeg;
}

void entradaVetorFloat(float* vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }
    
    return;
}

int main() {
    const int tamVetor {10};
    float vetorA[tamVetor] {};
    float vetorB[tamVetor] {};
    float vetorC[tamVetor] {};
    
    entradaVetorFloat(vetorA, tamVetor);
    entradaVetorFloat(vetorB, tamVetor);

    for (int i = 0, n = tamVetor - 1; (i < tamVetor) and (n >= 0); i++, n--) {
        vetorC[i] = (vetorA[i] + vetorB[n]) / 2.0;
    }

    for (int i = 0; i < tamVetor; i++) {
        cout << vetorC[i] << " ";
    }
    cout << endl;

    cout << endl;
    cout << encontraMaior(vetorA, tamVetor) << endl;
    cout << encontraMaiorSeg(vetorA, tamVetor) << endl;
    
    cout << endl;
    cout << encontraMaior(vetorB, tamVetor) << endl;
    cout << encontraMaiorSeg(vetorB, tamVetor) << endl;

    return 0;
}
