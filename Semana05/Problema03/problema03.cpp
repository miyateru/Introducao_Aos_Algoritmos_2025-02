//IAlg - Semana 05 - Problema 03
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    int i = 0, num = 0, numMersenne = 0;
    
    ifstream entrada("senha.txt");
    
    if (entrada) {
        entrada >> num;
        
        ofstream saida("saida.txt");
        
        while ((numMersenne = pow(2, i) - 1) <= num) {
            saida << numMersenne << "  ";
            i++;
        }
        
        saida.close();
    }
    
    entrada.close();
    
    return 0;
}
