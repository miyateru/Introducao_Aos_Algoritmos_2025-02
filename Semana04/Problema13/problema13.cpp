//IAlg - Semana 04 - Problema 13
#include <iostream>

using namespace std;

int main(){
    unsigned int picanha, alcatra, linguica, espetVeg, sal, farinha, carvao;
    float desconto, valorFinal, valorTotal;

    cin >> picanha >> alcatra >> linguica
        >> espetVeg >> sal >> farinha >> carvao;

    valorTotal = 0;
    valorTotal += picanha*28.90;
    valorTotal += alcatra*19.90;
    valorTotal += linguica*7.95;
    valorTotal += espetVeg*2.99;
    valorTotal += sal*1.50;
    valorTotal += farinha*1.85;
    valorTotal += carvao*8.70;
    
    if (valorTotal <= 200) {
        desconto = valorTotal*0.05;
        valorFinal = valorTotal - desconto;
    } else if (valorTotal > 200) {
        desconto = valorTotal*0.10;
        valorFinal = valorTotal - desconto;
    }
    
    cout << valorTotal << endl << desconto << endl << valorFinal << endl;
    
    return 0;
}
