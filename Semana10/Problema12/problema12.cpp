// IAlg - Semana 10 - Problema 12
#include <iostream>

int soma(int valor1, int valor2) {
    if (valor2 <= 0) {
        return 0;
    }
    else {
        return valor1 + soma(valor1, valor2-1);
    }
}

int main() {
    int v1 = 0, v2 = 0;
    
    std::cin >> v1 >> v2;
    std::cout << soma(v1, v2) << std::endl;

    return 0;
}
