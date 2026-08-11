#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*Exercício 1
Cria uma variável int numero = 10 e um ponteiro que
aponte para ela. Mostra:
• o valor de numero;
• o endereço de numero;
• o valor guardado no ponteiro;
• o valor obtido através de *ponteiro.*/

int main() {
    
    int numero = 10;
    int *p = &numero; //definir ponteiro para uma variavel.

    cout << numero << endl; //valor de "numero"
    cout << &numero << endl; //endereco de "numero"
    cout << p << endl; //valor guardado no ponteiro
    cout << *p; //valor obtido atraves de *ponteiro
    return 0;
}