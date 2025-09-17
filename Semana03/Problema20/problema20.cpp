//IAlg - Semana 03 - Problema 20
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    const int rendimentoM2 = 3;
    const int litrosLata = 18;
    int areaPinturaM = 0, qLata = 0;
    float valorLata = 0.0;

    ifstream entrada("entrada.txt");
    entrada >> areaPinturaM >> valorLata;
    entrada.close();

    qLata = ceil(ceil(areaPinturaM / rendimentoM2) / litrosLata);

    ofstream saida("saida.txt");
    saida << fixed << setprecision(2);
    saida << qLata << endl;
    saida << (qLata * valorLata) << endl;
    saida.close();

    return 0;
}
