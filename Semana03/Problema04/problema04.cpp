//IAlg - Semana 03 - Exercicio 04
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    int numero = 0, v1 = 0, v2 = 0, v3 = 0;
    ofstream arquivoSaida ("saida.txt");

    cin >> numero;
    v1 = numero / 100;
    v2 = (numero - (v1 * 100)) / 10;
    v3 = (numero - (v1 * 100) - (v2 * 10));
    arquivoSaida << v1 * v2 * v3;
    cout << v1 + v2 + v3 << endl;

    arquivoSaida.close();
    return 0;
}
