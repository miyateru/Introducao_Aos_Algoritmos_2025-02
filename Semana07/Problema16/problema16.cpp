// IAlg - Semana 07 - Prooblema 16
#include <iostream>

void lerVetor(int *vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        std::cin >> vetor[i];
    }

    return;
}

int main() {
    const int tamVetor = 5;
    int vetorA[tamVetor] = {};
    int vetorB[tamVetor] = {};

    lerVetor(vetorA, tamVetor);
    lerVetor(vetorB, tamVetor);

    int tamIntersecao = 0;
    for (int i = 0; i < tamVetor; i++) {
        for (int j = 0; j < tamVetor; j++) {
            if (vetorA[i] == vetorB[j]) {
                std::cout << vetorA[i] << " ";
                tamIntersecao++;
            }
        }
    }
    if (tamIntersecao == 0) {
        std::cout << "VAZIO" << std::endl;
    }
    else {
        std::cout << std::endl;
    }

    return 0;
}
