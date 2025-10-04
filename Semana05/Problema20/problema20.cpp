//IAlg - Semana 05 - Problema20
//3n + 1
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    int num = 0;

    cin >> num;

    ofstream saida("senha.txt");

    saida << num << " ";
    while(num > 1) {
        if (num % 2 == 0) {
            num /= 2;
        }
        else {
            num *= 3;
            num++;
        }
        saida << num << " ";
    }
    saida << endl;

    saida.close();
    return 0;
}
