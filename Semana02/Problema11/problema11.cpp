//IAlg - Semana 02 - Problema 11
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    float real = 0.0, dolar = 0.0, euro = 0.0, libra = 0.0;

    cin >> real;
    dolar = real / 2.13;
    euro = real / 2.84;
    libra = real / 3.34;

    ofstream arquivo ("salario.txt");
    arquivo << fixed << setprecision(2);
    arquivo << dolar << endl;
    arquivo << euro << endl;
    arquivo << libra << endl;
    arquivo.close();

    return 0;
}
