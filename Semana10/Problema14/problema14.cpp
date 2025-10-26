// IAlg - Semana 10 - Problema 14
#include <iostream>

int buscaBinaria(int *vetor, int pos_inicial, int pos_final, int valor) {
    if (pos_inicial > pos_final) {
        return -1;
    }

    int meio = (pos_inicial + pos_final)/2;

    if (vetor[meio] == valor) {
        return meio;
    }
    else if (vetor[meio] > valor) {
        return buscaBinaria(vetor, meio+1, pos_final, valor);
    }
    else {
        return buscaBinaria(vetor, pos_inicial, meio-1, valor);
    }
}

int main() {
    int qNum = int();
    std::cin >> qNum;

    int *numeros = new int[qNum];
    for (int i = 0; i < qNum; i++) {
        std::cin >> numeros[i];
    }

    int valor = int(0);
    std::cin >> valor;

    std::cout << buscaBinaria(numeros, 0, qNum-1, valor) << std::endl;

    delete[] numeros;
    return 0;
}
