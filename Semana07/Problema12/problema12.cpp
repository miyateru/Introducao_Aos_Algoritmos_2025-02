//IAlg - Semana 07 - Problema 12
#include <iostream>

using namespace std;

int main() {
    const int tamVetor = 16;
    int repeticoes = 0;
    float vetor[tamVetor] = {};

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    cin >> repeticoes;
    if (repeticoes <= 0 ) {
        cout << 0 << endl;
        return 0;
    }
    
    float somatorio = 0.0;
    for (int i = 0; i < repeticoes; i++) {
        somatorio += vetor[i];
    }
    
    cout << somatorio << endl;
    
    return 0;
}
