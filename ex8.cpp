#include <iostream>
#include <string>

using namespace std;

int main() {

    int n1;

    cout << "Selecione um numero: ";
    cin >> n1;

    for (int i = 0; i < 10; i++) {
        cout << n1 << " x " << (i + 1) << " = " << n1 * (i+1) << endl;
    }

    return 0;
}