//IAlg - Semana 05 - Problema 12
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string chapa1, chapa2, localVot;
    int voto = 0, votos1 = 0, votos2 = 0, votosTotal = 0;;
    
    ifstream dados("eleicao.txt");
    
    if (dados) {
        dados >> chapa1 >> chapa2;
        
        while (dados >> localVot) {
            //Votos para chapa1
            dados >> voto;
            votos1 += voto;
            votosTotal += voto;
            //Votos para chapa2
            dados >> voto;
            votos2 += voto;
            votosTotal += voto;
        }
        
        if (votos1 > votos2) {
            cout << chapa1 << endl;
            cout << votos1 << endl;
            cout << ((float) votos1 / (float) votosTotal) * 100 << endl;
        } 
        else {
            cout << chapa2 << endl;
            cout << votos2 << endl;
            cout << ((float) votos2 / (float) votosTotal) * 100 << endl;
        }
    }
    else {
        cout << "Arquivo nao encontrado: \"eleicao.txt\"" << endl;
    }
    
    dados.close();
    
    return 0;
}
