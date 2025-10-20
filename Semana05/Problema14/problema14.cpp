//IAlg - Semana 05 - Problema 14
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int contador = 0;
    string palavra = "", palavraAnterior = "";
    string nomeArquivo = "";

    cin >> nomeArquivo;

    ifstream entrada(nomeArquivo);

    entrada.seekg(0, ios::end);
    int bytes = entrada.tellg();
    entrada.seekg(0, ios::beg);

    if (!bytes) {
        cout << 0 << endl;
        return 0;
    }

    if (entrada) {
        entrada >> palavraAnterior;

        while (entrada >> palavra) {    
            if (palavra != palavraAnterior) {
                contador++;
            }

            else if (palavra == palavraAnterior) {
                cout << contador;
                contador = -1;
            }
            
            palavraAnterior = palavra;
        }

    cout << (contador + 1) << endl;

    entrada.close();
    }
    
    return 0;
}
