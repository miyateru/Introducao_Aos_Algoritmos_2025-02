// IAlg - Semana 08 - Problema 06
#include <iostream>

void leLista(std::string *lista, int tamanhoLista);

int main() {
    int qItens1 = 0;
    std::cin >> qItens1;
    std::string *lista1 = new std::string[qItens1];
    leLista(lista1, qItens1);

    int qItens2 = 0;
    std::cin >> qItens2;
    std::string *lista2 = new std::string[qItens2];
    leLista(lista2, qItens2);

    int qConstam = 0;
    for (int i = 0; i < qItens1; i++) {
        bool consta = false;

        for (int j = 0; j < qItens2; j++) {
            if (lista1[i] == lista2[j]) {
                consta = true;
                qConstam++;
            }
        }

        if (!consta) {
            std::cout << lista1[i] << std::endl;
        }
    }
    if (qConstam == qItens1) {
        std::cout << "NADA" << std::endl;
    }

    delete[] lista1;
    delete[] lista2;

    return 0;
}

void leLista(std::string *lista, int tamanhoLista) {
    for (int i = 0; i < tamanhoLista; i++) {
        std::cin >> lista[i];
    }

    return;
}
