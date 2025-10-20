//IAlg - Semana 05 - Problema 17
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    const float erro = 0.00001;
    const string nomeArquivoEntr = "entrada";
    ifstream entrada(nomeArquivoEntr);

    if(!entrada) {
        cout << "Arquivo não encontrado: " << nomeArquivoEntr << endl;
        return 0;
    }

    //Entrada por habitante:
    //- Salário do habitante (número real);
    //- Número de filhos do habitante (número inteiro).

    //Valores para calculo das medias
    int numPop = 0, FilhosPop = 0, SalarMilOuMenos = 0;
    float SalarPop = 0.0, maiorSalar = 0.0;
    //Valores para informacoes habitante
    int qFilhosHab = 0;
    float salarHab = 0.0; 
    //Recebe informacoes habitante
    while (entrada >> salarHab >> qFilhosHab) {
    
        if(salarHab > maiorSalar) {
            maiorSalar = salarHab;
        }
        if ((salarHab < 1000) or (abs(salarHab - 1000) <= erro)) {
            SalarMilOuMenos++;
        }

        SalarPop += salarHab;
        FilhosPop += qFilhosHab;
        numPop++;        

        //Zera informacoes habitante
        //Proposito de debug/erro
        salarHab = 0.0, qFilhosHab = 0; 
    }

    //Saidas: 
    //Média do salário da população;
    cout << ((float) SalarPop / numPop) << endl;
    //Média do número de filhos;
    cout << ((float) FilhosPop / numPop) << endl;
    //Maior salário
    cout << maiorSalar << endl;
    //Percentual de pessoas com salário até R$1.000,00 (inclusive).
    cout << ((float) SalarMilOuMenos / numPop) << endl;

    entrada.close();
    return 0;
}

