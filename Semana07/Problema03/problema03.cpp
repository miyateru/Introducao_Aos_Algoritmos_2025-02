//IAlg - Semana 07 - Problema 03
#include <iostream>

using namespace std;

int encontraMaior(int* vetor, int tamVetor) {
    int maior = vetor[0];
    for (int i = 1; i < tamVetor; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

void imprimiVetor(int* vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int quanMultiplos(int multiplo, int* vetor, int tamVetor) {
    int quant = 0;
    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] % multiplo == 0) {
            quant++;
        }
    }
    return quant;
}

int main() {
    const int tamVetor = 10;
    int entrada[tamVetor] = {};

    for (int i = 0; i < tamVetor; i++) {
        cin >> entrada[i];
    }

    int quanMultpDois = quanMultiplos(2, entrada, tamVetor);
    int quanMultpTres = quanMultiplos(3, entrada, tamVetor);

    int multpDois[quanMultpDois] = {};
    int multpTres[quanMultpTres] = {};

    for (int i = 0, n = 0; (i < tamVetor) and (n < quanMultpDois); i++) {
        if (entrada[i] % 2 == 0) {
            multpDois[n] = entrada[i];
            n++;
        }
    }

    for (int i = 0, n = 0; (i < tamVetor) and (n < quanMultpTres); i++) {
        if (entrada[i] % 3 == 0) {
            multpTres[n] = entrada[i];
            n++;
        }
    }

    imprimiVetor(multpDois, quanMultpDois);
    cout << encontraMaior(multpDois, quanMultpDois) << endl;
    imprimiVetor(multpTres, quanMultpTres);
    cout << encontraMaior(multpTres, quanMultpTres) << endl;

    return 0;
}
