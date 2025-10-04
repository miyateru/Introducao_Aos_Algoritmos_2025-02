//IAlg - Semana 04 - Problema 04
#include <iostream>

using namespace std;

int main(){
    int idade = 0;
    float pesoKg = 0.0;
    
    cin >> idade >> pesoKg;
    
    if ((idade >= 0) and (idade < 20)) {
        if ((pesoKg >= 0) and (pesoKg < 60)) {
            cout << "9" << endl;
        } else if ((pesoKg >= 60) and (pesoKg < 90)) {
            cout << "8" << endl;
        } else if (pesoKg >= 90) {
            cout << "7" << endl;
        }
    } else if ((idade >= 20) and (idade <= 50)) {
        if ((pesoKg >= 0) and (pesoKg < 60)) {
            cout << "6" << endl;
        } else if ((pesoKg >= 60) and (pesoKg < 90)) {
            cout << "5" << endl;
        } else if (pesoKg >= 90) {
            cout << "4" << endl;
        }
    } else if (idade > 50) {
        if ((pesoKg >= 0) and (pesoKg < 60)) {
            cout << "3" << endl;
        } else if ((pesoKg >= 60) and (pesoKg < 90)) {
            cout << "2" << endl;
        } else if (pesoKg >= 90) {
            cout << "1" << endl;
        }
    }

    return 0;
}

