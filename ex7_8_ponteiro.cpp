#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*Exercício 7
Cria:
int notas[] = {12, 15, 18, 10, 16};
Percorre o array com um ponteiro e calcula a soma.
Exercício 8 — Um pouco mais difícil
Com o mesmo array, encontra o maior valor utilizando
ponteiros.
Este último é bom para perceberes se realmente entendeste
ponteiros e não apenas a sintaxe.*/

int main() {

    int notas[] = {12, 15, 18, 10, 16};
    int soma=0, maior = 0;

    for (int *p = notas; p != notas +5; p++){ //é o mesmo que "*p = notas[0]; enquanto p for diferente de notas[5], p++" *p aponta sempre para a primeira posicao. e como notas[5] nao existe, o ciclo acaba.

        soma += *p; //o ciclo aumenta o ponteiro sempre por 1. é o mesmo que fazer soma += notas[0] + notas[1] + notas[2]...
        if (*p > maior){ //se a posicao em que o ponteiro esta for maior que a variavel maior
            maior = *p; //maior passa a ser a posicao atual do ponteiro. neste exercicio sera a terceira posicao. ou seja notas[2]
        }
        
    }
    
    cout << "A soma e de: " << soma << endl;
    cout << "O numero maior e: " << maior;
    
    return 0;
}