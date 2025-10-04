#include <iostream>

using namespace std;

bool equalByItems(int* vector00, int sizeVector00, int* vector01, int sizeVector01) {
    for (int i = 0; i < sizeVector00; i++) {
        bool found = false;

        for (int j = 0; j < sizeVector01; j++) {
            if (vector00[i] == vector01[j]) {
                found = true;
            }
        }
        if (!found) {
            return false;
        }
    }

    return true;
}

int main() {
    int vectorSize = 0;

    cin >> vectorSize;

    int *vector00 = new int[vectorSize];
    int *vector01 = new int[vectorSize];

    for (int i = 0; i < vectorSize; i++) {
        cin >> vector00[i];
    }
    for (int i = 0; i < vectorSize; i++) {
        cin >> vector01[i];
    }

    if (equalByItems(vector00, vectorSize, vector01, vectorSize)) {
        cout << "IGUAIS" << endl;
    }
    else {
        cout << "DIFERENTES" << endl;
    }

    return 0;
}
