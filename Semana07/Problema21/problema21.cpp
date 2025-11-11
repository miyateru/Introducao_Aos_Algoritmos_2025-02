// IAlg - Semana 07 - Problema 21
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const string iFileName = "entrada.txt";
    ifstream iFile(iFileName);
    if (!iFile) {
        cout << "Não foi possível abrir o arquivo \"" << iFileName << "\"" <<
        endl;
        
        return 0;
    }

    const int qStudents = 15;
    int students[qStudents];
    for (int i = 0; i < qStudents; i++) {
        iFile >> students[i];
    }

    iFile.close();

    int uniqueValues = 0;
    for (int i = 0; i < qStudents; i++) {
        if (students[i] != 0) {
            for (int j = i + 1; j < qStudents; j++) {
                if (students[i] == students[j]) {
                    students[j] = 0;
                }
            }

            uniqueValues++;
        }
    }
    
    cout << uniqueValues << endl;

    return 0;
}
