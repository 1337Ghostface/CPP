#include <iostream>
#include <string>

using namespace std;

//Exercicio 10 -- vou usar o numero 5 como exemplo para perceberes como o "for" funciona.

int main() {
    
    int num=0, soma=0;
    
    cout << "Insira um número positivo: "; //usuario insere 5
    cin >> num;
    
    soma = num; //soma = num. neste caso 5.
    
    cout << num << "!= "; //mostrar fatorial do numero. exemplo: 5!=

    for (int i=num; i>1; i--){ //i = num (5), enquanto i for maior que 1 (maior que 1 porque queremos fazer o "for" 1 vez menos que o numero inicial), i menos 1.
        soma = soma * (i-1); //soma (neste caso 5) = 5 x (i-1) como o i tem o valor de 5, vai ser 5 x (i-1 = 4) 4 x (i-1 = 3) 3 x (i-1 = 2) 2 x (i-1 = 1) 1.
        cout << i << " x "; //para mostrar a conta
    }
    
    cout << "1 = " << soma; //e o final da conta
    // cout << "O fatorial de " << num << " é: " << soma << endl;

    return 0;
}