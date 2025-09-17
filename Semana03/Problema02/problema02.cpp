//IAlg - Semana 03 - Exercicio 02
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo = " ", palavra = " ";

    cin >> nomeArquivo >> palavra;

    ofstream arquivo (nomeArquivo);
    arquivo << palavra << endl;
    arquivo.close();

    return 0;
}

//OU:
//fstream arquivo;
//arquivo.open(nomeArquivo, fstream::app);
//arquivo << palavra;
