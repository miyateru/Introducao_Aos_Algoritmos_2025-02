//IAlg - Semana 04 - Problema 05
#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3, nf;
	
	cin >> n1 >> n2 >> n3 >> nf;
	
	if (nf <= n1) {
		cout << nf << " " << n1 << " " << n2 << " " << n3 << endl;
	} else if (nf <= n2) {
		cout << n1 << " " << nf << " " << n2 << " " << n3 << endl;
	} else if (nf <= n3) {
		cout << n1 << " " << n2 << " " << nf << " " << n3 << endl;
	} else {
		cout << n1 << " " << n2 << " " << n3 << " " << nf << endl;
	}
	
	return 0;
}

