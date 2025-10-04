//IAlg - Semana 05 - Problema 13
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //H -> horário para o qual deseja saber quantas vezes você retornou a ele
    int H = 0, horaVolta = 0, qH = 0, qVoltas = 0;
    ifstream horarios("magia.txt");
    
    if (horarios) {
        horarios >> H;
        while (horarios >> horaVolta >> qVoltas) {
            if ((horaVolta >= H) and ((horaVolta - qVoltas) <= H)) {
                qH++;
            }
        }
        cout << qH << endl;
    }
    else {
        cout << "Arquivo nao encontrado: \"eleicao.txt\"" << endl;
    }
    
    horarios.close();
    return 0;
}
