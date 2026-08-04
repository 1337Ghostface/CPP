#include <iostream>
#include <string>

using namespace std;

int main() {
    
int vet[3], maior;

    cout << "Exercicio 4 - Qual o maior numero." << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Digite o " << (i + 1) << "º número:";
        cin >> vet[i];
    }
    
    maior = vet[0];

    for (int i = 1; i < 3; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

cout << "O número maior é: " << maior << endl;

    return 0;
}