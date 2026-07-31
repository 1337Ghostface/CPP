#include <iostream>
#include <string>

using namespace std;

int main() {
    
float n1, n2;

    cout << "Exercicio 1 - Calculo simples." << endl;

    cout << "Insira o primeiro número: ";
    cin >> n1;

    cout << "Insira o segundo número: ";
    cin >> n2;

    cout << "Soma: " << (n1 + n2) << endl;
    cout << "Subtração: " << (n1 - n2) << endl;
    cout << "Divisão: " << (n1 / n2) << endl;
    cout << "Multiplicação: " << (n1 * n2) << endl;

    return 0;
}