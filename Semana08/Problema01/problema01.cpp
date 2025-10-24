//IAlg - Semana 08 - Problema01
#include <iostream>

using namespace std;

bool capicua(int *vetor, int tamVetor) {
    for (int i = 0; i < (tamVetor / 2); i++) {
        int posFinal = (tamVetor - 1) - i;
        
        if (vetor[i] == vetor[posFinal]) {
            cout << i  << " " << vetor[i] << " " 
                 << posFinal << " " << vetor[posFinal] << " ";
        }
        else {
            cout << endl;
            return false;
        }
    }
    cout << endl;
    return true;
}

void lerVetor(int* vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    return;
}

int main() {
    int qDigitos {};

    cin >> qDigitos;
    int *vetor = new int[qDigitos];
    lerVetor(vetor, qDigitos);
    
    if (capicua(vetor, qDigitos)) {
        cout << "sim" << endl;
    }
    else {
        cout << "nao" << endl;
    }

    delete[] vetor;
    return 0;
}
