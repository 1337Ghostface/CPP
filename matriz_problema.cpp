#include <iostream>
#include <string>
#include <algorithm> // necessário para usar a função sort

using namespace std;

int main() {
    
    int valor = 0;
    int mat[3][3];

    cout << "Insira os valores da sua matriz: " << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> mat[i][j];   
        }
    }

    cout << endl;

    cout << "Matriz original:" << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << mat[i][j] << " | ";
        }
        cout << endl;
    }

    cout  << endl;

    sort (mat[0], mat[0] + 9);      // sort (inicio da matriz (só usar o primeiro valor), fim da matriz (inicio + tamanho))

    cout << endl << "Matriz ordenada:" << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << mat[i][j] << " | ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}