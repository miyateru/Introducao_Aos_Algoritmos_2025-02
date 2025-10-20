//IAlg - Semana 05 - Problema 15
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo = "";

    cin >> nomeArquivo;

    ifstream entrada(nomeArquivo);
    if (entrada) {
        //Caso nenhuma palavra
        //Move input stream para o final, se ainda no comeco: Arquivo esta vazio
        entrada.seekg(0, ios::end);
        if (entrada.tellg() == 0) {
            return 0;
        }
        //Volta posicao da input stream para o comeco
		else {
			entrada.seekg(0, ios::beg);
		}
        
        int qIguais = 0;
        string palavraAnterior = "";
        string palavra = "";

        //Caso primeira palavra
        entrada >> palavraAnterior;
        //Caso palavra anterior Vs palavra
        while(entrada >> palavra) {
            if (palavra.compare(palavraAnterior) == 0) {
                qIguais++;
            }
            else {
                cout << qIguais + 1;
                qIguais = 0;
            }
            palavraAnterior = palavra;
        }
        cout << qIguais + 1;
        cout << endl;
        
        entrada.close();
    }
    else {
        cout << "Não foi possivel encontrar o arquivo: " << nomeArquivo << endl;
    }

    return 0;
}
