//IAlg - Semana 05 - Problema 07
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 0, prevNum = 0, quan = 0;
    string nomeArquivo = " ";
    
    cin >> nomeArquivo;
    
    ifstream entrada(nomeArquivo);
    
    if (entrada) {
        entrada >> prevNum;
        while (entrada >> num) {
            if (num == prevNum*2) {
                quan++;
            }
            prevNum = num;
        }
        
        ofstream saida("dobro.txt");
        saida << quan << endl;
        saida.close();
    }
    else {
        cout << "Arquivo não encontrado: " << nomeArquivo << endl;
    }
    
    entrada.close();
    return 0;
}
