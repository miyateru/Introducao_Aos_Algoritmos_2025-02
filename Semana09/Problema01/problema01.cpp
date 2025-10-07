#include <iostream>

using namespace std;

char** criaMatriz(int linhas, int colunas) {
    char **matriz = new char*[linhas];
    for (int i = 0; i < colunas; i++) {
        matriz[i] = new char[colunas];
    }
    return matriz;
}

void deletaMatriz(char** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    return;
}

void lerMatriz(char** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
        }
    }
    return;
}

bool vogal(char letra) {
    switch (tolower(letra)){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
        break;
    default:
        break;
    }
    return false;
}

int main() {
    bool subMatrizVogais = false;
    int dimensoesMatriz = 0, linhaSub = 0, colunaSub = 0;

    cin >> dimensoesMatriz;

    if (dimensoesMatriz < 2) {
        cout << "Tamanho invalido de matriz" << endl;
        exit(-1);
    }

    char **matriz = criaMatriz(dimensoesMatriz, dimensoesMatriz);
    lerMatriz(matriz, dimensoesMatriz, dimensoesMatriz);

    for (int i = 0; i < (dimensoesMatriz - 1); i++) {
        for (int j = 0; j < (dimensoesMatriz - 1); j++) {
            if ((vogal(matriz[i][j])) and (vogal(matriz[i][j + 1])) and
                (vogal(matriz[i + 1][j])) and (vogal(matriz[i + 1][j + 1]))) {
                linhaSub = i;
                colunaSub = j;
                subMatrizVogais = true;
            }
        }
    }

    if (subMatrizVogais) {
        cout << matriz[linhaSub][colunaSub] << " " << matriz[linhaSub][colunaSub + 1] << endl;
        cout << matriz[linhaSub + 1][colunaSub] << " " << matriz[linhaSub + 1][colunaSub + 1] << endl;
    }
    else {
        cout << "submatriz nao encontrada" << endl;
    }

    deletaMatriz(matriz, dimensoesMatriz);

    return 0;
}
