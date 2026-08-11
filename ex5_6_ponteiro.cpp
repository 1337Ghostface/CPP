#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*Exercício 5
int valores[] = {4, 8, 12};
int *p = valores;
Mostra o primeiro elemento usando apenas p.*/

/*Exercício 6
Usando o mesmo array, mostra:
4
8
12
sem utilizar valores[0], valores[1] ou valores[2].*/

int main() {
    
    int valores[] = {4, 8, 12};
    int *p = valores;

    cout << "O primeiro elemento é: " << *p << endl; //*p mostra sempre o primeiro elemento
    cout << "O segundo elemento é: " << *(p+1) << endl; //para mostrar o segundo
    cout << "O terceiro elemento é: " << *(p+2) << endl; //e o terceiro

    return 0;
}