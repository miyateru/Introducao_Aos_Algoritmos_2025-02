// IAlg - Semana 07 - Problema 19
#include <iostream>

void lerVetor(float *vetor, int tamanhoVetor) {
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cin >> vetor[i];
    }
    
    return;
}

int main() {
    const int tamVetor = 5;
    float vetorA[tamVetor] = {};
    float vetorB[tamVetor] = {};

    lerVetor(vetorA, tamVetor);
    lerVetor(vetorB, tamVetor);

    float produtoEscalar = 0;
    for (int n = 0; n < tamVetor; n++) {
        produtoEscalar += vetorA[n] * vetorB[n];
    }
    std::cout << produtoEscalar << std::endl;

    return 0;
}
