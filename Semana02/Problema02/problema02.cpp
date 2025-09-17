//IAlg - Semana 02 - Problema 02
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    float compMarca = 0.0, velocidade = 0.0;

    cin >> compMarca;
    velocidade = 14.6 * sqrt(compMarca);
    cout << velocidade << endl;

    return 0;
}
