//IAlg - Semana 03 - Problema 17
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float salario, salarioBase, gratificacao, imposto;
	
	cin >> salarioBase >> gratificacao >> imposto;
	salario = salarioBase + gratificacao;
	
	ofstream holerite("holerite.txt");
	holerite << fixed << setprecision(2);
	holerite << salario << endl;
	holerite << salario*(imposto/100) << endl;
	holerite << salario - (salario*(imposto/100)) << endl;
	holerite.close();	

	return 0;
}
