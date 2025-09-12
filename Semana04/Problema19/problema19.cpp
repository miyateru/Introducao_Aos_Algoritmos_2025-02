//IAlg - Semana 04 - Problema 19
#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    char operacao;

    cin >> n1 >> n2 >> operacao;

    switch (operacao) {
        case '+':
            cout << (n1+n2) << endl;
            break;
        case '-':
            cout << (n1-n2) << endl;
            break;
        case '*':
            cout << (n1*n2) << endl;
            break;
        case '/':
            cout << (n1/n2) << endl;
        default:
            break;
    }

    return 0;
}