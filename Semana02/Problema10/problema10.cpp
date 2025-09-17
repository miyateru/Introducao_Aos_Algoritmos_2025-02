//IAlg - Semana 02 - Problema 10
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int dias = 0;
    float valorLiquido = 0.0;

    ifstream arquivoEntra ("entrada");
    arquivoEntra >> dias;
    valorLiquido = (dias * 60 * 0.92);
    arquivoEntra.close();

    ofstream arquivoSaida ("saida");
    arquivoSaida << "R$ " << valorLiquido;
    arquivoSaida.close();

    return 0;
}
