#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*Exercício 2
Cria:
int pontos = 20;
int *p = &pontos;
Usa apenas o ponteiro para alterar pontos para 50.*/

int main() {
    
    int pontos = 20;
    int *p = &pontos;

    *p = 50;
    cout << *p;    

    return 0;
}