// IAlg - Semana 10 - Problema 13
#include <iostream>

int encontraMenor(int *vetor, int pos_inicial, int pos_final) {
    if (pos_inicial == pos_final) {
        return vetor[pos_inicial];
    }
    
    for (int i = pos_inicial + 1; i <= pos_final; i++) {
        if (vetor[pos_inicial] > vetor[i]) {
            return encontraMenor(vetor, pos_inicial+1, pos_final);
        }
    }
    return vetor[pos_inicial];
}

int main() {
    int tamVetor = 0;
    std::cin >> tamVetor;

    int *vetor = new int[tamVetor];
    for (int i = 0; i < tamVetor; i++) {
        std::cin >> vetor[i];
    }

    std::cout << encontraMenor(vetor, 0, tamVetor-1) << std::endl;

    delete[] vetor;
    return 0;
}
