#include <iostream>

using namespace std;

int *multipleOfIn(int multOf, int amountMult, int* entry, int sizeEntry) {
    if (amountMult == 0) {
         int* multiples = new int[1];
         multiples[0] = 0;

         return multiples;
    }

    int* multiples = new int[amountMult];

    for (int i = 0, n = 0; (i < sizeEntry) and (n < amountMult); i++) {
        if (entry[i] % multOf == 0) {
            multiples[n] = entry[i];
            n++;
        }
    }

    return multiples;
}

void printVector(int *vector, int sizeVector) {
    if (sizeVector == 0) {
        cout << vector[0] << endl;
    }
    else {
        for (int i = 0; i < sizeVector; i++) {
            cout << vector[i] << " ";
        }
        cout << endl;
    }
    
    return;
}

int qMultiplesOf(int multOf, int* entry, int sizeEntry) {
    int qMultiples = 0;

    for (int i = 0; i < sizeEntry; i++) {
        if (entry[i] % multOf == 0) {
            qMultiples++;
        }
    }

    return qMultiples;
}

int main() {
    int sizeVector = 0;

    cin >> sizeVector;

    int *numbers = new int[sizeVector];

    for (int i = 0; i < sizeVector; i++) {
        cin >> numbers[i];
    }

    int qMultOfTwo = qMultiplesOf(2, numbers, sizeVector);
    int qMultOfThree = qMultiplesOf(3, numbers, sizeVector);
    int qMultOfSix = qMultiplesOf(6, numbers, sizeVector);

    int* multOfTwo = multipleOfIn(2, qMultOfTwo, numbers, sizeVector);
    int* multOfThree = multipleOfIn(3, qMultOfThree, numbers, sizeVector);
    int* multOfSix = multipleOfIn(6, qMultOfSix, numbers, sizeVector);
  
    printVector(multOfTwo, qMultOfTwo);
    printVector(multOfThree, qMultOfThree);
    printVector(multOfSix, qMultOfSix);

    return 0;
}
