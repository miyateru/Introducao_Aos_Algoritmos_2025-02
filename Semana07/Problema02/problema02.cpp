// IAlg - Semana 07 - Problema 02
#include <iostream>

using namespace std;

void lerVetor(int *vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }
    
    return;
}

int main() {
    const int qInimigos = 10;
    // lp -> Life points
    int lpInimigos[qInimigos];
    lerVetor(lpInimigos, qInimigos);

    bool chainCast;
    int qDerrotados = 0;
    do {
        chainCast = false;

        for (int i = 0; i < qInimigos; i++) {
            if (lpInimigos[i] > -1) {
                lpInimigos[i]--;
            }
            if (lpInimigos[i] == 0) {
                qDerrotados++;
                chainCast = true;
            }
        }
    } while(chainCast);

    cout << qDerrotados << endl;

    return 0;
}
