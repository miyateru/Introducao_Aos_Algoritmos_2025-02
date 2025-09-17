//IAlg - Semana 02 - Problema 13
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main () {
   float valorInicial = 0.0, valorFinal = 0.0;
   
   ifstream entrada ("entrada");
   entrada >> valorInicial;
   valorFinal = valorInicial * 0.91;
   cout << "R$ " << fixed << setprecision(1) << valorFinal;
   entrada.close();
   
   return 0;
}
