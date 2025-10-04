//IAlg - Semana 06 - Problema 03
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

float cmParaMetro (float cm) {
    return cm/100.0;
}

float metroParaCm (float metros) {
    return metros*100.0;
}

int main() {
    const int erro = 0.00001;
    float num = 0;
    string unidade = " ";

    cin >> num >> unidade;

    if ((num < 0) or (num <= erro)){
        cout << "ERRO" << endl;

        return 0;
    }

    if (unidade == "centimetro") {
        num = metroParaCm(num);
        cout << num << " cm" << endl;
    }
    else if (unidade == "metro") {
        num = cmParaMetro(num);
        cout << num << " m" << endl;
    }
    else {
        cout << "ERRO" << endl;

        return 0;
    }

    return 0;
}
