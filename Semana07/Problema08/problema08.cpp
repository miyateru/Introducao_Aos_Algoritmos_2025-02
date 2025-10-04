#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int sizeVector = 10;
    const int amountPerFreeMeal = 10; 
    
    int amountMeal[sizeVector] = {};
    string nameClient[sizeVector] = {};
    
    for (int i = 0; i < sizeVector; i++) {
        cin >> nameClient[i];
    }
    
    for (int i = 0; i < sizeVector; i++) {
        cin >> amountMeal[i];
    }
    
    for (int i = 0; i < sizeVector; i++) {
        int freeMeals = floor(amountMeal[i] / (amountPerFreeMeal + 1));
        cout << nameClient[i] << " " << (amountMeal[i] - freeMeals) << endl;
    }
    
    return 0;
}
