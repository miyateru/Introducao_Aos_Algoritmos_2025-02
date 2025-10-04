//IAlg - Semana 06 - Problema 02
#include <iostream>

using namespace std;

int imprime3nMais1(int num) {
    int qNumSequencia = 1;

    while (num > 1) {
        cout << num << " ";
        if (num % 2 == 0) {
            num /= 2;
        }
        else {
            num = num*3 + 1;
        }
        qNumSequencia++;
    }
    cout << num << endl;
    cout << qNumSequencia << endl;

    return qNumSequencia;
}

int main() {
    int num = 0;

    cin >> num;
    imprime3nMais1(num);

    return 0;
}
