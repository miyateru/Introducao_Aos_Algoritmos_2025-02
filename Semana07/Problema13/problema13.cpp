//IAlg - Semana 07 - Problema 13
#include <iostream>

using namespace std;

int main() {
    const int tamVetor = 9;
    const int qNotas = 5;
    int notas[tamVetor] = {};
    float freqRelativa[qNotas] = {};
    
    for (int i = 0; i < tamVetor; i++) {
        cin >> notas[i];
        freqRelativa[notas[i] - 1]++;
    }

    for (int i = qNotas - 1; i >= 0; i--) {
        cout << (i + 1) << ": " << (freqRelativa[i] / tamVetor) << endl;
    }
    
    return 0;
}
