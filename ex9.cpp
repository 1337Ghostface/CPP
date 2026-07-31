#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n1 = 0, soma = 0;

    cout << "Insira numeros. Para terminar, prima 0: " << endl;
    cin >> n1;
    soma = n1;

    do {
        cin >> n1;
        soma += n1;
    } while (n1 != 0);

    cout << "A soma de todos os numeros é de: " << soma << endl;

    return 0;
}