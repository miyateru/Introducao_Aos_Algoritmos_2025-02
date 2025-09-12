//IAlg - Semana 05 - Problema 02
#include <fstream>

using namespace std;

int main() {
	int i = 0, num = 0, numTrian = 0;
	
	ifstream entrada("entrada.txt");
	
	if (entrada) {
		entrada >> num;
		
		i = num - 1;
		while (i > 0) {
			numTrian += i;
			i--;
		}
		
		ofstream saida("saida.txt");
		saida << (num + numTrian) << endl;
		saida.close();
	}

	entrada.close();
	
	return 0;
}
