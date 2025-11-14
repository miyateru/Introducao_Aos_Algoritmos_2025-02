//IAlg - Semana 08 - Problema05
#include <iostream>

using namespace std;

int encPosMaior(int *vetor, int tamVetor) {
    int posMaior = 0;

    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] > vetor[posMaior]) {
            posMaior = i;
        }
    }

    return posMaior;
}

int encPosSegMaior(int *vetor, int tamVetor) {
    int posMaior = encPosMaior(vetor, tamVetor);
    int posSegMaior = 0;
    while ((posMaior == posSegMaior) and (posSegMaior < tamVetor)) {
        posSegMaior++;
    }
    
    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] < vetor[posMaior] and vetor[i] > vetor[posSegMaior]) {
            posSegMaior = i;
        } 
    }

    return posSegMaior;
}

int encPosMenor(int *vetor, int tamVetor) {
    int posMenor = 0;

    for (int i = 1; i < tamVetor; i++) {
        if (vetor[i] < vetor[posMenor]) {
            posMenor = i;
        }
    }

    return posMenor;
}

int encPosSegMenor(int *vetor, int tamVetor) {
    int posMenor = encPosMenor(vetor, tamVetor);
    int posSegMenor = 0;
    while ((posMenor == posSegMenor) and (posSegMenor < tamVetor)) {
        posSegMenor++;
    }

    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] > vetor[posMenor] and vetor[i] < vetor[posSegMenor]) {
            posSegMenor = i;
        } 
    }

    return posSegMenor;
}

int main() {
    int tamVetor = 0;
    cin >> tamVetor;
    int *vetor = new int[tamVetor];
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    int posSegMaior = encPosSegMaior(vetor, tamVetor);
    int posSegMenor = encPosSegMenor(vetor, tamVetor);
    for (int i = 0; i < tamVetor; i++) {
        if (i != posSegMaior and i != posSegMenor) {
            cout << vetor[i] << endl;
        }
    }

    delete[] vetor;
    return 0;   
}
