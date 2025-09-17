//IAlg - Semana 03 - Exercicio 05
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    float n1 = 0.0, n2 = 0.0, n3 = 0.0;
    float p1 = 0.0, p2 = 0.0, p3 = 0.0;
    float media = 0.0;
    ifstream notas ("notas.txt");
    ofstream saida ("final.txt");

    notas >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
    media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    saida << fixed << setprecision(2);
    saida << media << endl;

    notas.close();
    saida.close();
    return 0;
}
