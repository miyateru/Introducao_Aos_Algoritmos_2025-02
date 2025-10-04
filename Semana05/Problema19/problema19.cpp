//IAlg - Semana 05 - Problema 19
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int votosRep01 = 0, votosRep02 = 0, votosRep03 = 0;
    int qVotos = 0;
    string nomeArquivo = " ";
    string rep01 = " ", rep02 = " ", rep03 = " ";

    cin >> nomeArquivo;

    ifstream entrada(nomeArquivo);
    if (entrada) {
        entrada >> rep01 >> rep02 >> rep03;
        entrada >> qVotos;

        while(qVotos > 0) {
            string palavra = " ";

            entrada >> palavra;

            if (palavra == rep01) {
                votosRep01++;
            }
            else if (palavra == rep02) {
                votosRep02++;
            }
            else if (palavra == rep03) {
                votosRep03++;
            }

            qVotos--;
        }

        if ((votosRep01 > votosRep02) and (votosRep01 > votosRep03)) {
            cout << votosRep01 << endl;
        }
        else if (votosRep02 > votosRep03) {
            cout << votosRep02 << endl;
        }
        else {
            cout << votosRep03 << endl;
        }

        entrada.close();
    }
    else {
        cout << "Arquivo não encontrado: " << nomeArquivo << endl;
    }

    return 0;
}
