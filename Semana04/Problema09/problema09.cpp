//IAlg - Semana 04 - Problema 09
#include <cmath>
#include <iostream>

using namespace std;

const float MAR_ERRO {0.00001};
const float PI {3.14159};

int main() {
    char operacao{}, uniMedida{};
    float num{};

    cin >> operacao >> uniMedida >> num;
    
    //Operacoes trigonometricas em cmath usam radianos
    /*
    ---------- Grau para Radiano ----------
    360º graus == 2PI radianos
    1º grau == PI/180º radianos
    radianos == graus * PI/180

    ---------- Radiano para Grau ----------
    360º graus = 2PI radianos
    1ºgrau == PI/180 radianos
    gruas == radianos*180/PI
    */
    
    if (uniMedida == 'g') {
        //Seno com graus
        if (operacao == 's') {
            if (abs(num - 90) <= MAR_ERRO) {
                num = 1;
            }
            else if (abs(num) <= MAR_ERRO) {
                num = 0;
            }
            else {
                num *= PI / 180;
                num = sin(num);
            }
        }
        //Cosseno com graus
        else if (operacao == 'c') {
            if (abs(num - 90) <= MAR_ERRO) {
                num = 0;
            }
            else if (abs(num) <= MAR_ERRO) {
                num = 1;
            }
            else {
                num *= PI / 180;
                num = cos(num);
            }
        }
    }
    else if (uniMedida == 'r') {
        //Seno com radianos
        if (operacao == 's') {
            if (abs(num - 0.5 * PI) <= MAR_ERRO) {
                num = 0;
            }
            else if (abs(num) <= MAR_ERRO) {
                num = 1;
            }
            else {
                num = sin(num);
            }
        }
        //Cosseno com radianos
        else if (operacao == 'c') {
            if (abs(num - 0.5 * PI) <= MAR_ERRO) {
                num = 1;
            }
            else if (abs(num) <= MAR_ERRO) {
                num = 0;
            }
            else {
                num = cos(num);
            }
        }
    }
    
    cout << num;
    
    return 0;
}
