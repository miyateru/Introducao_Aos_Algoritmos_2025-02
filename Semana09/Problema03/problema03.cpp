// IAlg - Semana 09 - Problema 03
#include <iostream>

int main() {
    int qPalavras = 0;
    std::cin >> qPalavras;

    std::string *palavras = new std::string[qPalavras];
    for (int i = 0; i < qPalavras; i++) {
        std::cin >> palavras[i];
    }

    char letra = ' ';
    std::cin >> letra;

    int posMaiorOc = 0;
    int maiorOc = 0;
    for (int i = 0; i < qPalavras; i++) {
        int ocorrencias = 0;

        for (int j = 0; j < int(palavras[i].length()); j++) {
            if (palavras[i][j] == letra) {
                ocorrencias++;
            }
        }

        if (ocorrencias >= maiorOc) {
            posMaiorOc = i;
            maiorOc = ocorrencias;
        }
    }

    std::cout << palavras[posMaiorOc] << std::endl;

    delete[] palavras;

    return 0;
}
