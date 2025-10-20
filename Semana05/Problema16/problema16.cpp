//IAlg - Semana 05 - Problema 16
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    ifstream entrada("entrada.txt");

    if (entrada) {
        int aux = 0;
    
        //Encontra o menor numero
        int menor = 0;
        entrada >> menor;
        while (entrada >> aux) {
            if (aux < menor) {
                menor = aux;
            }
        }

        //Limpa arquivo em EOF, volta arquivo pro comeco
        entrada.clear();
        entrada.seekg(0, ios::beg);

        //Encontra o maior numero
        int maior = 0;
        entrada >> maior;
        while (entrada >> aux) {
            if (aux > maior) {
                maior = aux;
            }
        }

        //Limpa arquivo em EOF, volta arquivo pro comeco
        entrada.clear();
        entrada.seekg(0, ios::beg);

        //Encontra a media dos numeros lidos
        float media = 0.0;
        int qNum = 0;
        while(entrada >> aux) {
            media += aux;
            qNum++;
        }
        media /= qNum;

        cout << fixed << setprecision(1) << endl;
        cout << maior << endl;
        cout << menor << endl;
        cout << media << endl;

        entrada.close();
    }
    else {
        cout << "Arquivo não encontrado: entrada.txt" << endl;
    }

    return 0;
}
