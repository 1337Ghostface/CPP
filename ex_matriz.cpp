#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int mat[3][3], soma = 0, numMaior, somaLinha = 0, somaColuna = 0;

    cout << "Insira os números da matriz: " << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> mat[i][j];
            soma += mat[i][j];
        }
    }

    cout << endl;

    cout << "Os valores dentro da matriz são:" << endl << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";            
        }
        cout << endl;    
    }

    cout << endl << "A soma de toda a matriz é de: " << soma << endl << endl;
    
    for (int i = 0; i < 3; i++){
        cout << "A soma da " << (i+1) << "ª linha é de: ";
        cout << mat[i][0] + mat[i][1] + mat[i][2] << endl;
    }

    cout << endl;

    for (int j = 0; j < 3; j++){
        cout << "A soma da " << (j+1) << "ª coluna é de: ";
        cout << mat[0][j] + mat[1][j] + mat[2][j] << endl;
    }
    
    cout << endl << "Os elementos da diagonal principal são: " << endl << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == j){
                cout << mat[i][j] << " ";
            }           
        }    
    }

    return 0;
}