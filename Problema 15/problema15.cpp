//Ialg - Semana 02 - Problema 15
#include <cmath> //?
#include <fstream>
#include <iostream> //testes

using namespace std;

int main(){
	int valorTotal, valorCompra, q20, q10, q5, q2, q1;
	
	ifstream entrada("entrada.txt");
	entrada >> valorTotal >> valorCompra;
	entrada.close();
	
	valorTotal -= valorCompra;
	q20 = valorTotal/20;
	valorTotal -= q20*20;
	q10 = valorTotal/10;
	valorTotal -= q10*10;
	q5 = valorTotal/5;
	valorTotal -= q5*5;
	q2 = valorTotal/2;
	valorTotal -= q2*2;
	q1 = valorTotal;
	
	ofstream saida("saida.txt");
	saida << q20 << endl << q10 << endl << q5 << endl
		  << q2 << endl << q1 << endl;
	saida.close();
	
	return 0;
}
