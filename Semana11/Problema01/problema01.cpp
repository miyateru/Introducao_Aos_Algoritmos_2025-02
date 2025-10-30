// IAlg - Semana 11 - Problema 01
#include <iostream>

struct ponto{
    int X;
    int Y;
};

struct retangulo {
    ponto V1; // Vértice inferior esquerdo 
    ponto V2; // Vértice superior direito 
};

int main() {
    ponto P;
    std::cin >> P.X >> P.Y;

    int qRetangulos = 0;
    std::cin >> qRetangulos;

    retangulo retangulos[qRetangulos];
    for (int i = 0; i < qRetangulos; i++) {
        std::cin >> retangulos[i].V1.X >> retangulos[i].V1.Y >>
                    retangulos[i].V2.X >> retangulos[i].V2.Y;
    }

    int qDentro = 0;
    for (int i = 0; i < qRetangulos; i++) {
        bool aposV1 = P.X >= retangulos[i].V1.X and P.Y >= retangulos[i].V1.Y;
        bool antesV2 = P.X <= retangulos[i].V2.X and P.Y <= retangulos[i].V2.Y;

        if (aposV1 and antesV2) {
            qDentro++;
        }
    }
    std::cout << qDentro << std::endl;

    return 0;
};
