// IAlg - Semana 03 - Exercicio 03
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	float dist, x1, y1, x2, y2;
	ifstream arquivo ("entrada.txt");
	arquivo >> x1 >> y1 >> x2 >> y2;
	dist = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	cout << dist << endl;
	arquivo.close();
	return 0;
}
