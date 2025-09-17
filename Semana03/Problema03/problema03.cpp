//IAlg - Semana 03 - Exercicio 03
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    float dist = 0.0;
    float x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;

    ifstream arquivo ("entrada.txt");
    arquivo >> x1 >> y1 >> x2 >> y2;
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << dist << endl;
    arquivo.close();

    return 0;
}
