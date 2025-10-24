//IAlg - Semana 06 - Problema 06
#include <iostream>

using namespace std;

int somaDigitos(int numero) {
    int soma = 0;

    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }

    return soma;
}

bool numeroHarshad(int numero) {
    if (numero % somaDigitos(numero) == 0) {
        return true;
    }
    return false;
}

int main() {
    int numero = 0;

    cin >> numero;
    cout << (numero % somaDigitos(numero)) << " ";
    if (numeroHarshad(numero)) {
        cout << "sim" << endl;
    }
    else {
        cout << "nao" << endl;
    }

    return 0;
}

