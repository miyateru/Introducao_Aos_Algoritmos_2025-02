//IAlg - Semana 06 - Problema 14
//Combinacao simples
#include <iostream>

using namespace std;

double fatorial (int n) {
    double resultado = 1;
    
    if (n <= 0) {
        return resultado;
    }
    while (n > 0) {
        resultado *= n;
        n--;
    }
    return resultado;
}

double combinacaoSimples (int n, int p) {
    double resultado = 0;
    
    resultado = fatorial(n) / (fatorial(p) * fatorial(n-p));
    
    return resultado;
}

int main() {
    int N = 0, P = 0;

    cin >> N >> P;
    cout << combinacaoSimples (N, P) << endl;
    
    return 0;
}
