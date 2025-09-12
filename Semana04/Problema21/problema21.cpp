//IAlg - Semana 04 - Problema 21
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float valor, vAjuda;

    cin >> valor;

    vAjuda = valor * 0.2;
    cout << fixed << setprecision(2);
    if (vAjuda < 30.0) {
        cout << "sim " << vAjuda << endl;
    }
    else {
        cout << "nao " << vAjuda << endl;
    }

    return 0;
}