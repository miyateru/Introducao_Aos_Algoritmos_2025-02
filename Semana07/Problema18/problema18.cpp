// IAlg - Semana 07 - Problema 18
#include <iostream>

int posMaior(int *vetor, int tamanhoVetor) {
    int pos = 0;

    for (int i = 1; i < tamanhoVetor; i++) {
        if (vetor[i] > vetor[pos]) {
            pos = i;
        }
    }

    return pos;
}

int posMenor(int *vetor, int tamanhoVetor) {
    int pos = 0;

    for (int i = 1; i < tamanhoVetor; i++) {
        if (vetor[i] < vetor[pos]) {
            pos = i;
        }
    }

    return pos;
}

int main() {
    const int tamVetor = 10;
    int vetor[tamVetor] = {};
    for (int i = 0; i < tamVetor; i++) {
        std::cin >> vetor[i];
    }

    int indexMaior = posMaior(vetor, tamVetor);
    int indexMenor = posMenor(vetor, tamVetor);
    
    std::cout << vetor[indexMaior] << " " << indexMaior << std::endl;
    std::cout << vetor[indexMenor] << " " << indexMenor << std::endl;

    return 0;
}
