#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int inserido;

        cout << "Digite um número: ";
        cin >> inserido;

    for (int i = 0; i < inserido; i++) {
        cout << (i + 1) << ". ";
    }

    cout << endl;

    cout << "Fim do exercicio 6." << endl << endl;

    return 0;
}