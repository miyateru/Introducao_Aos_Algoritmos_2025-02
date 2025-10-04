// IAlg - Semana 06 - Problema 01
#include <iostream>

using namespace std;

void imprimiPiramide(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return;
}

int main() {
    int n = 0;

    cin >> n;
    imprimiPiramide(n);

    return 0;
}
