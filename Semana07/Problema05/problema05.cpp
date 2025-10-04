//IAlg - Semana 07 - Problema 05
#include <cmath>
#include <iostream>

using namespace std;

void lerVetorFloat(float* vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }
    
    return;
}

float somaComMax(float* vetor, int tamVetor) {
    float soma = 0.0;
    
    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] < 0) {
            soma += vetor[i];
        }
    }
    
    return soma;
}

int quantPositivos(float* vetor, int tamVetor) {
    const int erro = 0.00001;
    int quantidade = 0;
    
    for (int i = 0; i < tamVetor; i++) {
        //Vetor[i] maior ou igual a 0
        if ((vetor[i] > 0) or (abs(vetor[i]) <= erro)) {
            quantidade++;
        }
    }
    
    return quantidade;
}

int main() {
    const int tamVetor = 10;
    float numeros[tamVetor] = {};
    
    lerVetorFloat(numeros, tamVetor);
    
    cout << quantPositivos(numeros, tamVetor) << endl;
    cout << somaComMax(numeros, tamVetor) << endl;
    
    return 0;
}
