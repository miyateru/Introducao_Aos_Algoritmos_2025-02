// IAlg - Semana 10 - Problema 01
#include <iostream>

using namespace std;

int **criaMatriz(int linhas, int colunas) {
    int **matriz = new int *[linhas];

    for (int i = 0; i < linhas; i++) {
        matriz[i] = new int[colunas];
    }

    return matriz;
}

void deletaMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return;
}

bool disparoAtinge(int *disparo, int numeroEmbarcacao, int **grid) {
    if (grid[disparo[0]][disparo[1]] == numeroEmbarcacao) {
        return true;
    }

    return false;
}

void leMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
        }
    }
    return;
}

int main() {
    // Obtem grid do turno antes dos disparos
    const int tamGrid = 15;

    int **grid = criaMatriz(tamGrid, tamGrid);
    leMatriz(grid, tamGrid, tamGrid);

    // Obtem disparos para o turno. 
    // - Grid de duas dimensões, coordenadas são dados por (x, y)
    const int qDisparos = 3;
    const int dimensoes = 2;

    int **disparos = criaMatriz(qDisparos, dimensoes);
    leMatriz(disparos, qDisparos, dimensoes);

    const int destroier = 1;
    const int fragata = 2;
    const int lancha = 3;

    // Verifica se cada disparo atinge alguma embarcação.
    for (int i = 0; i < qDisparos; i++) {
        if (disparoAtinge(disparos[i], destroier, grid)) {
            cout << "destroier" << endl;
        }
        else if (disparoAtinge(disparos[i], fragata, grid)) {
            cout << "fragata" << endl;
        }
        else if (disparoAtinge(disparos[i], lancha, grid)) {
            cout << "lancha" << endl;
        }
        else {
            cout << "agua" << endl;
        }
    }

    deletaMatriz(grid, tamGrid);
    deletaMatriz(disparos, qDisparos);

    return 0;
}
