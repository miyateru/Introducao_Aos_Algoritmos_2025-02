#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main () {
   float valorInicial, valorFinal;
   
   ifstream entrada ("entrada");
   entrada >> valorInicial;
   valorFinal = valorInicial*0.91;
   cout << "R$ " << fixed << setprecision(1) << valorFinal;
   
   entrada.close();
   
   return 0;
}
