// IAlg - Semana 10 - Problema 15
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
        return buscaBinaria(vetor, pos_inicial, meio-1, valor);
    }
    else {
        return buscaBinaria(vetor, meio+1, pos_final, valor);
    }
}

int main() {
    int qNum = 0;
    std::cin >> qNum;

    int *numeros = new int[qNum];
    for (int i = 0; i < qNum; i++) {
        std::cin >> numeros[i];
    }

    int vBusca = 0;
    int vMult = 0;
    std::cin >> vBusca >> vMult;

    int posMult = buscaBinaria(numeros, 0, qNum-1, vBusca);
    if (posMult != -1) {
        numeros[posMult] *= vMult;
    }

    for (int i = 0; i < qNum; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    delete[] numeros;
    return 0;
}
