#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//Exercício 3

int main() {
    
    int x = 5; //define x como 5
    int *p = &x; //atribui ponteiro a x
    *p = 12; //usa o ponteiro para alterar o valor de x
    cout << x;

    return 0;
}