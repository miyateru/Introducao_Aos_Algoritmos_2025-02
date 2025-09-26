//IAlg - Semana 07 - Problema 02
#include <iostream>
#include <vector>

using namespace std;

void reduzirVetor(int* vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] > 0) {
            vetor[i]--;
        }
    }
    return;
}

int main() {
    const int tamVetor = 3;
    int vida[tamVetor] = {};
    bool vivos[tamVetor] = {};
    int qDerrotados = 0;

    //Preenche vetores
    for (int i = 0; i < tamVetor; i++) {
        vivos[i] = true;
    }
    
    for (int i = 0; i < tamVetor; i++) {
        cin >> vida[i];
    }

    //Remove do calculo inimigos já mortos
    for (int i = 0; i < tamVetor; i++) {
        if ((vivos[i] == true) and (vida[i] == 0)) {
            vivos[i] = false;
        }
    }

    //Calcula a quantidade de inimigos mortos pelo chain cast
    bool chain = true;
    for (int n = 0; chain == true; n++) {
        reduzirVetor(vida, tamVetor);

        //Verifica se algum inimigo foi morto nessa instancia do chain cast
        for (int i = 0; i < tamVetor; i++) {
            if ((vivos[i] == true) and (vida[i] == 0)) {
                qDerrotados++;
                vivos[i] = false;
            }
        }

        //Se a quantidade de derrotados é menor entoa ninguem é derrotado
        if (qDerrotados < n) {
            chain = false;
        }
        //Se a quantidade de derrotados e maior varios foram derrotados
        else if (qDerrotados > n) {
            n = qDerrotados;
        }
    }

    cout << qDerrotados << endl;

    return 0;
}
