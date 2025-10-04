//IAlg - Semana 05 - Problema 05
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int naoMultiploTres (int num) {
    if (num % 3 == 0) {
        return -1;
    }
    return num;
}

int main() {
    string nomeArquivo = " ";
    
    cin >> nomeArquivo;

    ifstream entrada(nomeArquivo);
    if(!entrada) {
        cout << "Arquivo não encontrado: " << nomeArquivo << endl;

        return 0;
    }

    ofstream saida("saida.txt");
    if(!saida) {
        cout << "Não foi possivel criar: saida.txt" << endl; 

        entrada.close();
        return 0;
    }

    int num = 0;
    while (entrada >> num) {
        if (naoMultiploTres(num) != -1) {
            saida << num << " ";
        }
    }
    saida << endl;

    return 0;
}
