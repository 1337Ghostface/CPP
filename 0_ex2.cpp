#include <iostream>
#include <string>

using namespace std;

int main() {
    
int idade = 0;

    cout << "Exercicio 2 - Maior ou menor de idade" << endl;

    cout << "Digite a sua idade: ";
    cin >> idade;

    if (idade < 18) {
        cout << "Menor de idade." << endl;
    }
    else {
        cout << "Maior de idade." << endl;
    }

    return 0;
}