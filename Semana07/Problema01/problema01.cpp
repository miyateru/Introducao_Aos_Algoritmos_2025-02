//IAlg - Semana 07 - Problema 01
#include <iostream>

using namespace std;

int max(double* vetor, int tamanho) {
    int maior = vetor[0];

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}

double mediaVetor(double* vetor, int tamanho) {
    double media = 0;

    for (int i = 0; i < tamanho; i++) {
        media += vetor[i];
    }

    return (media / tamanho);
}

int qValorAcima(double valor, double* vetor, int tamanho) {
    int q = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > valor) {
            q++;
        }
    }

    return q;
}

int main() {
    const int tamVetor = 7;
    double vetor[tamVetor] = {};

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    double media = mediaVetor(vetor, tamVetor);
    cout << media << endl;
    cout << qValorAcima(media, vetor, tamVetor) << endl;
    cout << max(vetor, tamVetor) << endl;

    return 0;
}
