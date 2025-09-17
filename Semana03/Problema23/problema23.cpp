//IAlg - Semana 03 - Problema 23
#include <fstream>

using namespace std;

int main() {
    int n = 0, m = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0,
        n6 = 0, m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0;

    ifstream entrada("entrada.txt");
    entrada >> n;
    entrada.close();

    n1 = n / 100000;
    n2 = (n - n1*100000) / 10000;
    n3 = (n - n1*100000 - n2*10000) / 1000;
    n4 = (n - n1*100000 - n2*10000 - n3*1000) / 100;
    n5 = (n - n1*100000 - n2*10000 - n3*1000 - n4*100) / 10;
    n6 = (n - n1*100000 - n2*10000 - n3*1000 - n4*100 - n5*10);

    m1 = n1 / n2;
    m2 = n2 / n3;
    m3 = n3 / n4;
    m4 = n4 / n5;
    m5 = n5 / n6;

    m = (m1 * 10000) + (m2 * 1000) + (m3 * 100) + (m4 * 10) + (m5);

    ofstream saida("saida.txt");
    saida << m;
    saida.close();

    return 0;
}
