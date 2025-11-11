// IAlg - Semana 07 - Problema 06
#include <iostream>

using namespace std;

void lerVetor(int *vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    return;
}

bool primo(int numero) {
    //Unico numero par que é primo é o 2
    if (numero == 2) {
        return true;
    }
    else if (numero <= 0 or numero % 2 == 0) {
        return false;
    }
    else {
        // https://stackoverflow.com/questions/5811151/why-do-we-check-up-to-the-square-root-of-a-number-to-determine-if-the-number-is
        /* Unicos impares que são primos, não divisiveis por 2, são aqueles
        que não são multiplos de outros impares no alcance da raiz quadrada
        do numero.*/
        for (int i = 3; i * i <= numero; i+=2) {
            if (numero % i == 0) {
                return false;
            }
        }

        return true;
    }
}

int main() {
    const int qNumeros = 9; 
    int numeros[qNumeros];
    lerVetor(numeros, qNumeros);

    for (int i = 0; i < qNumeros; i++) {
        if (primo(numeros[i])) {
            cout << numeros[i] << " " << i << endl;
        }
    }

    return 0;
}
