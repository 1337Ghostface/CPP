#include <iostream>
#include <string>

using namespace std;

int main() {

    int n1, n2;
    char opcao;

    cout << "Digite o 1º número que quer calcular: ";
    cin >> n1;

    do {
        cout << "Selecione o tipo de operação (+, -, /, *): ";
        cin >> opcao;
    
        if (opcao != '+' && opcao != '-' && opcao != '/' && opcao != '*') {
            cout << "Operação inválida. Tente novamente.";
        }
        } while (opcao != '+' && opcao != '-' && opcao != '/' && opcao != '*');

        cout << "Digite o 2º número que quer calcular: ";
        cin >> n2;

    switch (opcao) {

        case '+':
            cout << n1 + n2 << endl;
        break;

        case '-':
            cout << n1 - n2 << endl;
        break;

        case '*':
            cout << n1 * n2 << endl;
        break;

        case '/':
            cout << n1 / n2 << endl;
        break;

        }
    return 0;
}