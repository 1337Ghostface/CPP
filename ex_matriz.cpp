#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int mat[3][3], soma = 0, numMaior, somaLinha = 0, somaColuna = 0;

    cout << "Insira os números da matriz: ";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> mat[i][j];
            soma += mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 0; j++){
            somaLinha += mat[i][j];
            cout << mat[i][j] << endl;
        }
    }

    for (int i = 0; i < 0; i++){
        for (int j = 0; j < 3; j++){
            somaColuna += mat[i][j];
        }
    }
    


    return 0;
}