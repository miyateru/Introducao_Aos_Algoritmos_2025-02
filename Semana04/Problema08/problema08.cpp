//IAlg - Semana 04 - Problema 08
#include <cmath>
#include <iostream>

using namespace std;

const float MAR_ERRO = 0.0001;

int main() {
    float hExtra = 0.0, hFalta = 0.0, tempo = 0.0;
    int premio = 0;
    
    cin >> hExtra >> hFalta;
    
    tempo = (hExtra - ((2.0 / 3.0) * hFalta));
    tempo = tempo * 60.0;
    
    if ((tempo < 600) or (abs(tempo - 600) <= MAR_ERRO)) {
        premio = 100;
    }
    else if ((tempo > 600) and ((tempo < 1200) or (abs(tempo - 1200) <= MAR_ERRO))) {
        premio = 200;
    }
    else if ((tempo > 1200) and ((tempo < 1800) or (abs(tempo) - 1800) <= MAR_ERRO)) {
        premio = 300;
    }
    else if ((tempo > 1800) and ((tempo < 2400) or (abs(tempo) - 2400) <= MAR_ERRO)) {
        premio = 400;
    }
    else if (tempo > 2400) {
        premio = 500;
    }
    
    cout << premio << endl;
    
    return 0;
}
