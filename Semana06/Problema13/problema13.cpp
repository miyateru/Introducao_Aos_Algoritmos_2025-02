//IAlg - Semana 06 - Problema 13
#include <iostream>

using namespace std;

int diffHorarios (int h1, int m1, int h2, int m2);
int horaParaMin (int valorHora);

int main() {
    int hAtual = 0, mAtual = 0, hAlarme = 0, mAlarme = 0;
    int diff = 0;
   
    while (cin >> hAtual >> mAtual >> hAlarme >> mAlarme) {
        if ((hAtual == 0) and (mAtual == 0) and (hAlarme == 0) and (mAlarme == 0)) {
            return 0;
        }
        diff = diffHorarios(hAtual, mAtual, hAlarme, mAlarme);
        cout << diff << endl;
    }
    
    return 0;
}

int diffHorarios (int horMenor, int minMenor, int horMaior, int minMaior) {
    if (horMaior < horMenor) {
        horMaior += 24;
    }
    else if ((horMenor == horMaior) and (minMenor > minMaior)) {
        horMaior += 24;
    }
    
    int horario1 = horaParaMin(horMenor) + minMenor;
    int horario2 = horaParaMin(horMaior) + minMaior;
    
    return horario2 - horario1;
}

int horaParaMin (int valorHora) {
    return valorHora * 60;
}
