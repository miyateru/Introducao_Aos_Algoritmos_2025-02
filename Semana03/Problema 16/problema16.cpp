//IAlg - Semana 02 - Problema 16
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	float valorProduto;
	
	ifstream entrada("valor.txt");
	entrada >> valorProduto;
	entrada.close();
	
	ofstream opcoes("opcoes.txt");
	opcoes << fixed << setprecision(2);
	opcoes << valorProduto*0.92 << endl;
	opcoes << valorProduto/4 << endl;
	opcoes <<( valorProduto*1.1)/10 << endl;
	opcoes.close();
	
	return 0;
}
