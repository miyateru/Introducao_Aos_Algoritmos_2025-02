//IAlg - Semana 05 - Problema 21
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int entrada = 0;

    cin >> entrada;

    if (entrada < 2) {
        return 0;
    }

    ofstream saida("saida.txt");

    if (saida) {
        int soma = 0;
        int divisor = 1;
        while (divisor < entrada) {
            if (entrada % divisor == 0) {
                saida << divisor << "+";
                soma += divisor;
            }
            divisor++;
        }
        saida << divisor;
        soma += divisor;

        saida << "=" << soma << endl;
    }

    return 0;
}
