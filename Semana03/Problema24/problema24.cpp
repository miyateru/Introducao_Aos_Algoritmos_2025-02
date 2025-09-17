//IAlg - Semana 03 - Problema 24
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    float precoFabrica = 0.0, perLucroDestri = 0.0, perImposto = 0.0;
    float valTotal = 0.0, valLucroDestri = 0.0, valImposto = 0.0;

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
