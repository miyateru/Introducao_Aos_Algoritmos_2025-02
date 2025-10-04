//IAlg - Semana 05 - Problema 04
#include <fstream>
#include <string>

using namespace std;

int main() {
    int numAlunos = 0;
    float nota1 = 0.0, nota2 = 0.0;
    string aluno = "";
    
    ifstream entrada("entrada.txt");
    if (entrada) {
        ofstream saida("saida.txt");
        
        entrada >> numAlunos;
        while (numAlunos > 0) {
            entrada >> aluno >> nota1 >> nota2;
            if (((nota1 + nota2) / 2.0) < 7.0) {
                saida << aluno << endl;
            }
            numAlunos--;
        }
        
        saida.close();
    }
    entrada.close();
    
    return 0;
}
