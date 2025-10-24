//IAlg - Semana 06 - Problema 09
#include <cmath>
#include <iostream>

using namespace std;

int roundOddEven(float number) {
    if ((int) number % 2 == 0) {
        return ceil(number);
    }
    else {
        return floor(number);
    }
}

int main() {
    float number {};

    cin >> number;
    cout << roundOddEven(number) << endl;

    return 0;
};
