//IAlg - Semana 04 - Problema 20
#include <iostream>

using namespace std;

int main() {
    int  cH, cM, sH, sM;
    int tRes = 0;

    cin >> sH >> sM >> cH >> cM;
    if (cH > sH) {
        tRes = ((cH * 60) + cM) - ((sH * 60)  + sM);
    }
    else if (cH < sH){
        cH += 24;
        tRes = ((cH * 60) + cM) - ((sH * 60)  + sM);
    }
    else {
        tRes = cM - sM;
    }

    cout << tRes << endl;

    return 0;
}