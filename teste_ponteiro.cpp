#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int soma = 0, maior = 0, n = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    cout << endl;

    int notas[n];

    for (int i = 0; i < n; i++){
        cout << "Digite o " << (i + 1) << "º valor: ";
        cin >> notas[i];
    }

    cout << endl << "Vetor original:" << endl;

    for (int i = 0; i < n; i++){
        cout << notas[i] << ". ";
    }

    cout << endl;

    for (int *p = notas; p != notas + n; p++){
        soma += *p;
        if (*p > maior){
            maior = *p;
        }
    }

    sort(notas, notas + n);

    cout << endl;
    cout << "Vetor organizado:" << endl;

    for (int i = 0; i < n; i++){
        cout << notas[i] << ". ";
    }

    cout << endl << endl;
    cout << "A soma e de: " << soma << endl;
    cout << "O numero maior e: " << maior;

    return 0;
}