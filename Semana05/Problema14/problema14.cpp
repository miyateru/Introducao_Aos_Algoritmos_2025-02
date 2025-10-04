//IAlg - Semana 05 - Problema 14
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int cPalavras = 0;  
    string codigo = "", nomeArquivo = "", palavraAnte = "", palavra = "";
    
    cin >> nomeArquivo;
    
    ifstream entrada(nomeArquivo);
    
    if (entrada) {
        entrada >> palavraAnte;
        while (entrada >> palavra) {
            if (palavra == palavraAnte) {
                codigo.push_back((char) cPalavras);
                cPalavras = 0;
            }
            else {
                cPalavras++;
            }
            palavraAnte = palavra;
        }
        
        cout << codigo << endl;
    }
    else {
        cout << "Arquivo não encontrado: " << nomeArquivo << endl;
    }
    
    entrada.close();
    return 0;
}
