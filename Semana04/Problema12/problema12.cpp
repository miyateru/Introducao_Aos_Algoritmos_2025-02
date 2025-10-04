//IAlg - Semana 04 - Problema 12
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

const float MAR_ERRO = 0.0001;

int main(){
    float dist, vTrem1, vTrem2, tColisao;
    
    cin >> vTrem1 >> vTrem2 >> dist;
    
    tColisao = dist / (vTrem1 + vTrem2);
    
    cout << fixed << setprecision(2);
    if ((tColisao < 10) or (abs(tColisao - 10) <= MAR_ERRO)) {
        cout << "COLISAO" << endl;
    } else {
        cout << tColisao << endl;
    }
    
    return 0;
}
