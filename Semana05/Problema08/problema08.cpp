//IAlg - Semana 05 - Problema 08
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo;

    cin >> nomeArquivo;

    ifstream entrada(nomeArquivo);
    if (entrada) {
        int qVogais = 0;
        string entraPalavra = " ";
        char entraChar = ' ';

        while (entrada >> entraPalavra) {
            int i = entraPalavra.length() - 1;

            while (i >= 0) {
                entraChar = tolower(entraPalavra.at(i));
                
                switch (entraChar) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    qVogais++;
                    break;
                default:
                    break;
                }
                i--;
            }
        }
        cout << qVogais << endl;
    }
    else {
        cout << "Arquivo não encontrado: " << nomeArquivo << endl;
    }
    entrada.close();

    return 0;
}
