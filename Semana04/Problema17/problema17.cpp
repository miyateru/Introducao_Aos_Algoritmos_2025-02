//IAlg - Semana 04 - Problema 17
#include <cmath>
#include <iostream>

using namespace std;

const float MAR_ERRO = 0.0001;

int main() {
    float vaMulta, veMax, veAplica, veRadar;

    cin >> vaMulta >> veMax >> veRadar;

    veAplica = veMax * 1.3;
    if ((veRadar < veAplica) or (abs(veRadar - veAplica) <= MAR_ERRO)) {
        cout << "NAO SE APLICA" << endl;
    }
    else {
        cout << "R$ " << vaMulta*1.5 << endl;
    }

    return 0;
}