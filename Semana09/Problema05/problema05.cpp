// IAlg - Semana 09 - Problema 05
#include<iostream>

int main() {
    std::string *expressao = new std::string();
    std::getline(std::cin >> std::ws, *expressao);

    int *parenAbertos = new int(0);
    int *parenFechados = new int(0);
    
    for (int i = 0; i < int(expressao->size()); i++) {
        if (expressao->at(i) == '(') {
            (*parenAbertos)++;
        }
        else if (expressao->at(i) == ')') {
            (*parenFechados)++;
        }
    }
    
    if (*parenAbertos == *parenFechados) {
        std::cout << "parenteses corretos" << std::endl;
    }
    else {
        std::cout << "parenteses incorretos" << std::endl;
    }

    delete expressao;
    delete parenAbertos;
    delete parenFechados;
    return 0;
}
