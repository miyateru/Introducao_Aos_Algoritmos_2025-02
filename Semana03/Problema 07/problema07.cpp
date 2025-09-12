// IAlg - Semana 02 - Exercicio 07
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string nomeEntr1, nomeEntr2, nomeSaid;
	string contArq1, contArq2;
	
	cin >> nomeEntr1 >> nomeEntr2 >> nomeSaid;
	ifstream entr1 (nomeEntr1);
	ifstream entr2 (nomeEntr2);
	ofstream saida (nomeSaid);
	entr1 >> contArq1;
	entr2 >> contArq2;
	saida << contArq1 << " " << contArq2 << endl;
	
	entr1.close();
	entr2.close();
	saida.close();
	return 0;
}
