//IAlg - Semana 06 - Problema 04
#include <cmath>
#include <iostream>

using namespace std;

float inclinacao (int altura, int base) {
    return ((float) (altura * 100.0) / base);
}

int main() {
    const float erro = 0.00001;
    int qRampas = 0, qRampasAdequadas = 0;

    cin >> qRampas;

    for (int i = 0; i < qRampas; i++) {
        int base = 0, altura = 0;

        cin >> altura >> base;

        float valorInclinacao = inclinacao(altura, base);

        if ((valorInclinacao < 8) or (abs(8 - valorInclinacao) <= erro)) {
            qRampasAdequadas++;
        }

        cout << valorInclinacao << endl;
    }
    cout << qRampasAdequadas << endl;

    return 0;
}
