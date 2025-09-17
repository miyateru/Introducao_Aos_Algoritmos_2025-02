//IAlg - Semana 05 - Problema 09
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int pontJog1 = 0, pontJog2 = 0;
    string strike = "VERDE", naoStrike = "VERMELHO";

    ifstream entrada("boliche.txt");
    if (entrada) {
        
    }
    else {
        cout << "Arquivo não encontrado: \"boliche.txt\"" << endl;
    }
    entrada.close();

    return 0;
}