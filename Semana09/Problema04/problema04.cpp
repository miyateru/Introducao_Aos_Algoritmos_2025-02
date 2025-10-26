// IAlg - Semana 09 - Problema 04
#include <iostream>

int main() {
    int *qPalavras = new int(0);
    std::cin >> *qPalavras;

    std::string *palavras = new std::string[*qPalavras];
    for (int i = 0; i < *qPalavras; i++) {
        std::cin >> palavras[i];
    }

    char *letra = new char(' ');
    std::cin >> *letra;

    int *qSemOcorrencia = new int(0);
    for (int i = 0; i < *qPalavras; i++) {
        bool *ocorrencia = new bool(false);

        for (int j = 0; j < int(palavras[i].length()); j++) {
            if (palavras[i][j] == *letra) {
                *ocorrencia = true;
            }
        }

        if (!(*ocorrencia)) {
            (*qSemOcorrencia)++;
        }

        delete ocorrencia;
    }
    std::cout << *qSemOcorrencia << std::endl;

    delete qPalavras;
    delete[] palavras;
    delete letra;
    delete qSemOcorrencia;

    return 0;
}
