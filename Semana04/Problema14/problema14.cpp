//IAlg - Semana 04 - Problema 14
#include <iostream>
#include <string>

using namespace std;

int main(){
    string cor1, cor2;
    int num;
    bool palindromo = false;
    
    cin >> cor1 >> cor2 >> num;

    int n1, n2, n3, n4, n5, n6;
    n1 = num % 10;
    n2 = num / 10 % 10;
    n3 = num / 100 % 10;
    n4 = num / 1000 % 10;
    n5 = num / 10000 % 10;
    n6 = num / 100000 % 10;
    if ((n1 == n6) and (n2 == n5) and (n3 == n4)) {
        palindromo = true;
    }
    
    if (palindromo == true) {
        cout << cor1 << endl;
    } else {
        cout << cor2 << endl;
    }

    return 0;
}
