//IAlg - Semana 02 - Problema 18
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	int numEntr, numP1, numP2, numP3;
	
	ifstream chaves("chaves.txt");
	chaves >> numP1 >> numP2 >> numP3;
	chaves.close();
	cin >> numEntr;
	
	ofstream codigo("codigo.txt");
	codigo << numEntr % numP1 << endl;
	codigo << numEntr % numP2 << endl;
	codigo << numEntr % numP3 << endl;
	codigo.close();
	
	return 0;
}
