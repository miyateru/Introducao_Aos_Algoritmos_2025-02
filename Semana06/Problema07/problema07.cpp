//IAlg - Semana 06 - Problema 07
#include <iostream>

using namespace std;

int main() {
    bool run = true;

    while (run) {
        int numArabe = 0;

        cin >> numArabe;
        if (numArabe < 0) {
            run = false;
            continue;
        }

        if ((numArabe < 1) or (numArabe > 50)) {
            cout << "NUMERO INVALIDO" << endl;
            continue;
        }

    }

    return 0;
}
