//IAlg - Semana 07 - Problema 04
#include <iostream>

using namespace std;

void avaliaNota(int nota) {
    cout << nota << endl;
    if (nota >= 6) {
        cout << "APROVADO" << endl;
    }
    else {
        cout << "REPROVADO" << endl;
    }
    
    return;
}

void lerGabarito(char* vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }
    
    return;
}

int obtemNota(char* respostas, char* gabaritoAl, int tamVetor) {
    int qCertas = 0;
    
    for (int i = 0; i < tamVetor; i++) {
        if (respostas[i] == gabaritoAl[i]) {
            qCertas++;
        }
    }
    
    return qCertas;
}

int main() {
    const int tamVetor = 10;
    char respostas[tamVetor] = {};
    char provaAl1[tamVetor] = {};
    char provaAl2[tamVetor] = {};
    
    lerGabarito(respostas, tamVetor);
    lerGabarito(provaAl1, tamVetor);
    lerGabarito(provaAl2, tamVetor);
    
    int notaAl1 = obtemNota(respostas, provaAl1, tamVetor);
    int notaAl2 = obtemNota(respostas, provaAl2, tamVetor);
    
    avaliaNota(notaAl1);
    avaliaNota(notaAl2);
    
    return 0;
}
