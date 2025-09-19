//IAlg - Semana 05 - Problema 09
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int convertePont(string tentativa) {
    const string strike = "VERDE", naoStrike = "VERMELHO";
    if (strike.compare(tentativa) == 0) {
        return 1;
    }
    else if (naoStrike.compare(tentativa) == 0) {
        return 0;
    }
    return 0;
}

bool rodadaGanha(int pontJog1, int pontJog2) {
    if (pontJog1 > pontJog2) {
        cout << "Jogador 1 é o ganhador da aposta" << endl;
        return true;
    }
    else if (pontJog2 > pontJog1) {
        cout << "Jogador 2 é o ganhador da aposta" << endl;
        return true;
    }
    return false;
}

void pontRodada(string tentativa, int& pont) {
    pont += convertePont(tentativa);
    return;
}

int main() {
    bool ganhador = false;
    int pontJog1 = 0, pontJog2 = 0;
    string tentJog1 = " ", tentJog2 = " ";

    ifstream entrada("boliche.txt");
    if (entrada) {
        int i = 10;
        while ((entrada >> tentJog1 >> tentJog2) and (i > 0)) {
            pontRodada(tentJog1, pontJog1);
            pontRodada(tentJog2, pontJog2);
            i--;
        }
        
        if (rodadaGanha(pontJog1, pontJog2)) {
            return 0;
        }
         
        while ((entrada >> tentJog1 >> tentJog2) and (ganhador == false)) {
            pontRodada(tentJog1, pontJog1);
            pontRodada(tentJog2, pontJog2);
            ganhador = rodadaGanha(pontJog1, pontJog2);
        }
        
        return 0;
    }
    else {
        cout << "Arquivo não encontrado: \"boliche.txt\"" << endl;
    }
    entrada.close();

    return 0;
}
