#include <iostream>

using namespace std;

int main() {
    const int sizeVector = 20;
    const int diceFaces = 6;
    int entry[sizeVector] = {};
    float frequency[diceFaces] = {};
    
    for (int i = 0; i < sizeVector; i++) {
        cin >> entry[i];
        frequency[entry[i]-1]++;
    }
    
    for (int i = 0; i < diceFaces; i++) {
        float faceFrequency = frequency[i] / sizeVector;
        cout << (i + 1)  << ": " << faceFrequency << endl;
    }
    
    return 0;
}
