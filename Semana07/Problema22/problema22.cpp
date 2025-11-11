// IAlg - Semana 07 - Problema 22
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const string iFileName = "valores.txt";
    ifstream iFile(iFileName);
    if (!iFile) {
        cout << "Não foi possível abrir o arquivo \"" << iFileName << "\"" <<
        endl;
        
        return 0;
    }

    const int qNumbers = 15;
    float numbers[qNumbers];
    for (int i = 0; i < qNumbers; i++) {
        iFile >> numbers[i];
    }

    iFile.close();

    int posChanges[qNumbers];
    int qChanges;
    cin >> qChanges;

    for (int i = 0; i < qNumbers; i++) {
        if (i < qChanges) {
            cin >> posChanges[i];
        }
        else {
            posChanges[i] = -1;
        }
    }

    float adjustment;
    cin >> adjustment;
    for (int i = 0; i < qChanges; i++) {
        numbers[posChanges[i]] *= adjustment;
    }

    for (int i = 0; i < qNumbers; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
