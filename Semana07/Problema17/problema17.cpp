// IAlg - Semana 07 - Problema 17
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

    // Diferenca dos Conjuntos A e B
    int tamDiferenca = 0;
    for (int i = 0; i < tamVetor; i++) {
        bool pertence = false;

        for (int j = 0; j < tamVetor and !pertence; j++) {
            if (vetorA[i] == vetorB[j]) {
                pertence = true;
            }
        }

        if (!pertence) {
            std::cout << vetorA[i] << " ";
            tamDiferenca++;
        }
    }
    if (tamDiferenca == 0) {
        std::cout << "VAZIO" << std::endl;
    }
    else {
        std::cout << std::endl;
    }

    return 0;
}
