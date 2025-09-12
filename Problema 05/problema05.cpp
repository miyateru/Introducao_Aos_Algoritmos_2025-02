// IAlg - Semana 03 - Exercicio 04
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	float n1, n2, n3;
	float p1, p2, p3;
	float media;
	ifstream notas ("notas.txt");
	ofstream saida ("final.txt");
	
	notas >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
	media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
	saida << fixed << setprecision(2);
	saida << media << endl;

	notas.close();
	saida.close();
	return 0;
}
