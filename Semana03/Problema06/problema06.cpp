//IAlg - Semana 03 - Exercicio 06
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    float v1 = 0.0, v2 = 0.0, v3 = 0.0, v4 = 0.0,
    float v5 = 0.0, v6 = 0.0, v7 = 0.0, v8 = 0.0;
    float media = 0.0;
    ifstream arquivoEntr ("dados.txt");
    ofstream arquivoSaid ("media.txt");

    arquivoEntr >> v1 >> v2 >> v3 >> v4 >> v5 >> v6 >> v7 >> v8;
    arquivoSaid << fixed << setprecision(3);
    media = (v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8) / 8;
    arquivoSaid << media << endl;

    arquivoEntr.close();
    arquivoSaid.close();
    return 0;
}
