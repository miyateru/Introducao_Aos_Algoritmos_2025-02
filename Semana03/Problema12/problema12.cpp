//IAlg - Semana 03 - Problema 12
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float profundidade = 0.0, altura = 0.0, largura = 0.0, pesoCm3 = 0.0;

    ifstream entrada("entrada.txt");
    entrada >> profundidade >> altura >> largura >> pesoCm3;
    entrada.close();

    cout << fixed << setprecision(1);
    cout << (profundidade * altura * largura * pesoCm3) << endl;

    return 0;
}
