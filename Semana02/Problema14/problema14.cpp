//IAlg - Semana 02 - Problema 14
//Area de um triangulo (arquivo)
#include <fstream>
#include <iostream>

using namespace std;

int main () {
    float base = 0.0, altura = 0.0, area = 0.0;
    ifstream entrada ("triangulo.txt");
    ofstream saida ("saida.txt");
    
    entrada >> base >> altura;
	area = base * altura / 2;
    saida << area;
    
    entrada.close();
    saida.close();
    
    return 0;
}
