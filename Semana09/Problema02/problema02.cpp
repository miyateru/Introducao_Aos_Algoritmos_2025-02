#include <iostream>
#include <string>

using namespace std;

int main() {
    const int tamPalavra = 5;
    int qPalavras = 0, qIgual = 0, posIgual = 0;

    char *chave = new char[tamPalavra];
    cin >> chave;

    cin >> qPalavras;

    char **palavras = new char*[qPalavras]; 
    for (int i = 0; i < qPalavras; i++) {
        palavras[i] = new char[tamPalavra];
        cin >> palavras[i];
    }
    
    for (int i = 0; i < qPalavras; i++) {
        int qIgualInst = 0;

        for (int j = 0; j < tamPalavra; j++) {
            if (chave[j] == palavras[i][j]) {
                qIgualInst++;
            }
        }
        
        if (qIgualInst >= qIgual) {
            qIgual = qIgualInst;
            posIgual = i;
        }
    }
    cout << palavras[posIgual] << endl;

    delete[] chave;
    for (int i = 0; i < qPalavras; i++) {
        delete[] palavras[i];
    }
    delete[] palavras;

    return 0;
}
