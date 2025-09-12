//IAlg - Semana05 - Problema 10
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int tentativa;
	int cont = 0;
	int senha = 23031999;
	bool acesso = false;
	ifstream senhas("tentativas.txt");
	
	while ((senhas >> tentativa) and (acesso != true) and (cont < 4)) {
		if (tentativa == senha) {
			acesso = true;
		}
		cont++;
	}
	
	if (acesso) {
		cout << "acessou " << cont << endl;
	}
	else {
		cout << "nao " << cont << endl;
	}
	
	senhas.close();
	return 0;
}
