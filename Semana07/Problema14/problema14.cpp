//IAlg - Semana 07 - Problema 14
#include <iostream>

using namespace std;

int main() {
    const int tamVetor = 7;
    bool existeSoma = false;
    int numSoma = -1;
    int* vetor = new int[tamVetor];
    
    for (int i = 0; i < tamVetor; i++){
        cin >> vetor[i];
    } 
    cin >> numSoma;

    for (int i = 0; i < tamVetor and !existeSoma; i++) {
        for (int j = i+1; j < tamVetor and !existeSoma; j++) {
            for (int k = j+1; k < tamVetor and !existeSoma; k++) {
                if (numSoma == (vetor[i] + vetor[j] + vetor[k])) {
                    cout << vetor[i] << " " << vetor[j] << " " << vetor[k] << endl;
                    existeSoma = true;
                }
            }
        }
    }

    if (!existeSoma) {
        cout << "-1" << endl;
    }
    
    delete[] vetor;

    return 0;
}
