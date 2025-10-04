#include <iostream>

using namespace std;

// Returns the index of the smallest integer that is positive
int findSmallestPositive (int* vector, int sizeVector) {
    bool startPositionExist = false;
    int startPosition = 0;
    
    for (int i = 0; ((i < sizeVector) and (!startPositionExist)); i++) {
        if (vector[i] >= 0) {
            startPositionExist = true;
            startPosition = i;
        }
    }
    
    if (!startPositionExist) {
        return -1;
    }
    
    int smallestIndex = startPosition;
    for (int i = startPosition; i < sizeVector; i++) {
        if ((vector[i] >= 0) and (vector[i] < vector[smallestIndex])) {
            smallestIndex = i;
        }
    }
    
    return smallestIndex;
}

void printIntVector (int* vector, int sizeVector) {
    for (int i = 0; i < sizeVector; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    const int sizeVector = 5;
    int numberVector[sizeVector] = {};
    
    for (int i = 0; i < sizeVector; i++) {
        int number = -1;
        
        while (number < 0) {
            cin >> number;
        }
        numberVector[i] = number;
    }
    
    for (int i = 0; i < sizeVector; i++) {
        int index = findSmallestPositive(numberVector, sizeVector);
        numberVector[index] = -1;
        printIntVector(numberVector, sizeVector);
    }
    
    return 0;
}
