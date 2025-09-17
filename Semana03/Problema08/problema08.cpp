//IAlg - Semana 03 - Problema 08
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    float custoEspetaculo = 0.0, precoConvite = 0.0;
    int numMinConvites = 0;
    ifstream entrada ("teatro.txt");
    ofstream saida ("convite.txt");

    entrada >> custoEspetaculo >> precoConvite;
    numMinConvites = ceil(custoEspetaculo / precoConvite);
    cout << numMinConvites << endl;
    saida << numMinConvites;

    entrada.close();
    saida.close();
    return 0;
}
