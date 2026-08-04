#include <iostream>
#include <string>

using namespace std;

int main() {
    
int num_int[5], soma=0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o " << (i + 1) << "º numero: ";
        cin >> num_int[i];
        soma += num_int[i];
    }

    cout << "A soma é de: " << soma << endl;

    return 0;
}