// IAlg - Semana 10 - Problema 04]
// Rotação de 90° sentido horário matriz quadrada
#include <iostream>

int** criaMatriz(int grau) {
    int **matriz = new int*[grau];
    for (int j = 0; j < grau; j++) {
        matriz[j] = new int[grau];
    }
    
    return matriz;
}

void deletaMatriz(int **matriz, int grau) {
    for (int i = 0; i < grau; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return;
}

int main() {
    const int grau = 6;

    int **entrada = criaMatriz(grau);

    for (int i = 0; i < grau; i++) {
        for (int j = 0; j < grau; j++) {
            std::cin >> entrada[i][j];
        }
    }

    int **saida = criaMatriz(grau);

    for (int i = 0; i < grau; i++) {
        for (int j = 0; j < grau; j++) {
            saida[i][j] = entrada[(grau-1)-j][i];
        }
    }

    for (int i = 0; i < grau; i++) {
        for (int j = 0; j < grau; j++) {
            std::cout << saida[i][j] << " ";
        }
        std::cout << std::endl;
    }

    deletaMatriz(entrada, grau);
    deletaMatriz(saida, grau);
    return 0;
}
