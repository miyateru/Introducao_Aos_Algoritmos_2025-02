//IAlg - Semana 02 - Problema 09
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	float largura,altura,area,litros;
	int demaos = 3;
	
	cin >> largura >> altura;
	area = (largura*altura);
	litros = area/2;
	cout << fixed << setprecision(2);
	cout << litros*demaos << " Litros" << endl;
	
    return 0;
}
