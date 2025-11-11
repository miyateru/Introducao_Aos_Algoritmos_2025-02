// IAlg - Semana 07 - Problema 20
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream iFile("entrada.txt");
    if (!iFile) {
        cout << "Não foi possivel abrir o arquivo \"entrada.txt\"" << endl;
        return 0;
    }

    const int qNumbers = 10;
    int vector[qNumbers];
    for (int i = 0; i < qNumbers; i++) {
        iFile >> vector[i];
    }

    iFile.close();

    bool posVector[qNumbers] = {false};
    int Mode = 0;
    int qMode = 0;
    for (int i = 0; i < qNumbers; i++) {
        int appearances = 0; 
        
        for (int j = i; j < qNumbers; j++) {
            if (vector[i] == vector[j]) {
                appearances++;
            }
        }

        if (appearances > Mode) {
            for (int i = 0; i < qNumbers; i++) {
                posVector[i] = false;
            }
            posVector[i] = true;

            Mode = appearances;
            qMode = 1;
        }
        else if (appearances == Mode) {
            posVector[i] = true;
            qMode++;
        }
    }

    ofstream oFile("saida.txt");
    if (!oFile) {
        cout << "Não foi possivél criar o arquivo \"saida.txt\"" << endl;
        return 0;
    }

    oFile << qMode << endl;
    if (qMode > 0) {
        for (int i = 0; i < qNumbers; i++) {
            if (posVector[i]) {
                oFile << vector[i] << " ";
            }
        }
        oFile << endl;
    }

    oFile.close();

    return 0;
}
