//IAlg - Semana 02 - Problema 08
#include <iostream>

using namespace std;

int main() {
    float nota1 = 0.0, nota2 = 0.0, media = 0.0;

    cin >> nota1 >> nota2;
    media = ((nota1 * 4) + (nota2 * 3)) / 7;
    cout << media << endl;

    return 0;
}
