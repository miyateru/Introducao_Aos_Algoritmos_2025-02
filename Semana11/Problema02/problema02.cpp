// IAlg - Semana 11 - Problema 02
#include <iostream>
#include <string>

struct data {
    int dia;
    int mes;
    int ano;
};

struct pessoa {
    std::string nome;
    data nascimento;
};

int main() {
    int qPessoas = 0;
    std::cin >> qPessoas;

    pessoa pessoas[qPessoas];
    for (int i = 0; i < qPessoas; i++) {
        std::cin >> pessoas[i].nome >> 
                    pessoas[i].nascimento.dia >> pessoas[i].nascimento.mes >> 
                    pessoas[i].nascimento.ano;
    }

    pessoa MaisVelha = pessoas[0];
    for (int i = 1; i < qPessoas; i++) {
        if (pessoas[i].nascimento.ano < MaisVelha.nascimento.ano) {
            MaisVelha = pessoas[i];
        }
        else if (pessoas[i].nascimento.ano == MaisVelha.nascimento.ano) {
            if (pessoas[i].nascimento.mes > MaisVelha.nascimento.mes) {
                MaisVelha = pessoas[i];
            }
            else if (pessoas[i].nascimento.mes == MaisVelha.nascimento.mes) {
                if (pessoas[i].nascimento.dia > MaisVelha.nascimento.dia) {
                    MaisVelha = pessoas[i];
                }
            }
        }
    }
    std::cout << MaisVelha.nome << std::endl;

    return 0;
}
