#include <iostream>
#include <string>

using namespace std;

int main() {
    
int num;

    cout << "Exercicio 3 - Positivo ou negativo." << endl;

    cout << "Insira um número: ";
    cin >> num;

    if (num >= 0) {
        cout << "Número positivo." << endl;
    }
    else{
        cout << "Número negativo." << endl;
    }

    return 0;
}