//IAlg - Semana 04 - Problema 02
#include <iostream>

using namespace std;

int main() {
    double A = 0.0, B = 0.0;
    int operacao = 0;
    
    cin >> A >> B >> operacao;
    switch (operacao) {
        case 1:
            cout << ((A + B) / 2) << endl;
            break;
        case 2:
            if (A > B) {
                cout << (A - B) << endl;
            } else {
                cout << (B - A) << endl;
            }
            break;
        case 3:
            cout << (A * B) << endl;
            break;
        case 4:
            if (B != 0) {
                cout << (A / B) << endl;
            } else {
                cout << "ERRO" << endl;
                return 1;
            }
            break;
        default:
            cout << "ERRO" << endl;
            return 1;
    }
    return 0;
}
