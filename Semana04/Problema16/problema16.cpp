//IAlg - Semana 04 - Problema 16
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, n4;
    float maior1, maior2;

    cin >> n1 >> n2 >> n3 >> n4;

    if ((n1 > n2) and (n1 > n3) and (n1 > n4)) {
        maior1 = n1;
        if ((n2 > n3) and (n2 > n4)) {
            maior2 = n2;
        }
        else if (n3 > n4) {
            maior2 = n3;
        }
        else {
            maior2 = n4;
        }
    }
    else if ((n2 > n3) and (n2 > n4)) {
        maior1 = n2;
        if ((n1 > n3) and (n1 > n4)) {
            maior2 = n1;
        }
        else if ((n3 > n4)) {
            maior2 = n3;
        }
        else {
            maior2 = n4;
        }
    }
    else if (n3 > n4) {
        maior1 = n3;
        if ((n1 > n2) and (n1 > n4)) {
            maior2 = n1;
        }
        else if (n2 > n4) {
            maior2 = n2;
        }
        else {
            maior2 = n4;
        }
    }
    else {
        maior1 = n4;
        if ((n1 > n2) and (n1 > n3)) {
            maior2 = n1;
        }
        else if (n2 > n3) {
            maior2 = n2;
        }
        else {
            maior2 = n3;
        }
    }

    cout << maior1 << endl << maior2 << endl;

    return 0;
}