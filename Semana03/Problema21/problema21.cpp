//IAlg - Semana 03 - Problema 21
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    double grauDecimal = 0.0, fracDecimal = 0.0,
           grau = 0.0, minuto = 0.0, segundo = 0.0;

    cin >> grauDecimal;
    fracDecimal = modf(grauDecimal, &grau);
    segundo = modf(fracDecimal * 60, &minuto);
    segundo *= 60;
    segundo = (int)segundo;

    ofstream saida("coordenadas.txt");
    saida << grau << endl << minuto << endl << segundo << endl;
    saida.close();

    return 0;
}
