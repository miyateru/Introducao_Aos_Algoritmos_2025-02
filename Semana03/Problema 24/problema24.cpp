//IAlg - Semana 02 - Problema 24
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	float precoFabrica, perLucroDestri, perImposto;
	float valTotal, valLucroDestri, valImposto;
	
	ifstream dados("dados.txt");
	dados >> precoFabrica >> perLucroDestri >> perImposto;
	dados.close();
	
	valLucroDestri = precoFabrica * perLucroDestri;
	valImposto =  precoFabrica * perImposto;
	valTotal = precoFabrica + valLucroDestri + valImposto;
	
	ofstream custo("custo.txt");
	custo << fixed << setprecision(2);
	custo << valLucroDestri << endl 
		  << valImposto << endl 
		  << valTotal << endl;
	custo.close();
	
	return 0;
}
