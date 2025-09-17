//IAlg - Semana 03 - Problema 19
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    int tempoMiliSec = 0;
    float conHora = 0.0, conMinutos = 0.0, conSeg = 0.0;

    ifstream entrada("tempo.txt");
    entrada >> tempoMiliSec;
    entrada.close();

    conHora = ((tempoMiliSec / 1000) / 60) / 60;
    conMinutos = ((tempoMiliSec / 1000 ) / 60) - (conHora * 60);
    conSeg = (tempoMiliSec / 1000.0) - (conMinutos * 60) - (conHora * 60 * 60);

    ofstream saida("horario.txt");
    saida << conHora << ":" << conMinutos << ":" << conSeg << endl;
    saida.close();

    return 0;
}
