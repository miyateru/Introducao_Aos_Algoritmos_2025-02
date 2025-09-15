//IAlg - Semana 02 - Problema 12
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	float c,f,k;
	cin >> c;
	k = c+273;
	f = (1.8*c)+32;
	ofstream arquivo ("temperatura.txt");
	arquivo<<k<<" K\n"<<f<<" F";
	arquivo.close();
	return 0;
}
