//IAlg - Semana 04 - Problema 06
#include <cmath>
#include <iostream>

using namespace std;

int main(){
    const float erro = 0.0001;
    float peso = 0.0, altura = 0.0;
    
    cin >> peso >> altura;
    
    if (peso < 60.0)
    {
        if (altura < 1.20) {
            cout << 'A' << endl;
        } else if (((abs(altura - 1.20) <= erro) or (altura > 1.20)) and ((abs(altura - 1.70) < erro) or (altura < 1.70))) {
            cout << 'B' << endl;
        } else if (altura > 1.70) {
            cout << 'C' << endl;
        }
    }
    else if (((abs(peso - 60) <= erro) or (peso > 60)) and ((abs(peso - 90) <= erro) or (peso < 90)))
    {
        if (altura < 1.20) {
            cout << 'D' << endl;
        } else if (((abs(altura - 1.20) <= erro) or (altura > 1.20)) and ((abs(altura - 1.70) < erro) or (altura < 1.70))) {
            cout << 'E' << endl;
        } else if (altura > 1.70) {
            cout << 'F' << endl;
        }
    }
    else if (peso > 90)
    {
        if (altura < 1.20) {
            cout << 'G' << endl;
        } else if (((abs(altura - 1.20) <= erro) or (altura > 1.20)) and ((abs(altura - 1.70) < erro) or (altura < 1.70))) {
            cout << 'H' << endl;
        } else if (altura > 1.70) {
            cout << 'I' << endl;
        }
    }
    
    return 0;
}

