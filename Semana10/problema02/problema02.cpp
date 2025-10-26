// IAlg - Semana 10 - Problema 02
// // Organização matriz 
//
// |         | City 00 | City 01 | City 02 | City 03 |
// | ------- | ------- | ------- | ------- | ------- | 
// | City 00 | 00-->00 | 00-->01 | 00-->02 | 00-->03 |
// | City 01 | 01-->00 | 01-->01 | 01-->02 | 01-->03 |
// | City 02 | 02-->00 | 02-->01 | 02-->02 | 02-->03 |
// | City 03 | 03-->00 | 03-->01 | 03-->02 | 03-->03 |
//
#include <iostream>

int** createMatrix2Di(const int qRows, const int qColumns);
float** createMatrix2Df(const int qRows, const int qColumns);
void deleteMatrix2Di(int **matriz, const int qRows);
void deleteMatrix2Df(float **matriz, const int qRows);
void readMatrix2Di(int **matriz, const int qRows, const int qColumns);
void readMatrix2Df(float **matriz, const int qRows, const int qColumns);

int main() {
    const int *amountCitys = new int(4);
    float **intinerary = createMatrix2Df(*amountCitys, *amountCitys);
    readMatrix2Df(intinerary, *amountCitys, *amountCitys);

    int *sizeRoute = new int(0);
    std::cin >> *sizeRoute;

    int **route = createMatrix2Di(*sizeRoute, *sizeRoute);
    readMatrix2Di(route, 1, *sizeRoute);

    float *sum = new float(0);
    for (int i = 0; i < *sizeRoute-1; i++) {
        // Leaving from: route[0][i], Going to: route[0][i+1]
        *sum += intinerary[route[0][i]][route[0][i+1]];
    }
    std::cout << *sum << std::endl;

    deleteMatrix2Df(intinerary, *amountCitys);
    deleteMatrix2Di(route, 1);
    delete amountCitys;
    delete sizeRoute;
    delete sum;

    return 0;
}

int** createMatrix2Di(const int qRows, const int qColumns) {
    int **matrix = new int*[qRows];

    for (int i = 0; i < qRows; i++) {
        matrix[i] = new int[qColumns];
    }
    return matrix;
}

float** createMatrix2Df(const int qRows, const int qColumns) {
    float **matrix = new float*[qRows];

    for (int i = 0; i < qRows; i++) {
        matrix[i] = new float[qColumns];
    }
    return matrix;
}

void deleteMatrix2Df(float **matriz, const int qRows) {
    for (int i = 0; i < qRows; i++) {
        delete[] matriz[i];
    } 
    delete[] matriz;

    return;
}

void deleteMatrix2Di(int **matriz, const int qRows) {
    for (int i = 0; i < qRows; i++) {
        delete[] matriz[i];
    } 
    delete[] matriz;

    return;
}

void readMatrix2Df(float **matriz, const int qRows, const int qColumns) {
    for (int i = 0; i < qRows; i++) {
        for (int j = 0; j < qColumns; j++) {
            std::cin >> matriz[i][j];
        }
    }
    return;
}

void readMatrix2Di(int **matriz, const int qRows, const int qColumns) {
    for (int i = 0; i < qRows; i++) {
        for (int j = 0; j < qColumns; j++) {
            std::cin >> matriz[i][j];
        }
    }
    return;
}
