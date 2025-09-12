// IAlg - Semana 02 - Problema 14
// Área de um triângulo (arquivo)
#include <fstream>
#include <iostream>

using namespace std;

int main ()
{
    float base,altura,area;
    ifstream entrada ("triangulo.txt");
    ofstream saida ("saida.txt");
    
    entrada >> base >> altura;
	area = base*altura/2;
    saida << area;
    
    entrada.close();
    saida.close();
    
    return 0;
}
