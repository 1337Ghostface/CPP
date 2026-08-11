#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n = 0;
    int valor = 0;

    cout << "Insira o tamanho do seu vetor: ";
    cin >> n;

    cout << endl;

    int vetor[n];

    for (int i = 0; i < n; i++){
        cout << "Insira o " << i + 1 << "º número do seu vetor: ";
        cin >> vetor[i];
    }

    cout << endl;

    cout << "Vetor original:" << endl;

    for (int i = 0; i < n; i++){
        cout << vetor[i] << " | ";
    }

    cout  << endl;

    /* for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {   // j = i + 1 porque vai comparar com o numero seguinte do i. i = 0 + 1 compara com j = 0.
            if (vetor[i] > vetor[j]) {      // se o vetor[i] for maior que o vetor[j]
                valor = vetor[i];           //guarda o valor de vetor[i] à parte
                vetor[i] = vetor[j];        //copia o valor de vetor[j] para o de vetor[i]
                vetor[j] = valor;           //mete o valor que estava em vetor[i] no vetor[j]
            }
        }
    }*/

    sort (vetor, vetor + n);    //sort (inicio do vetor, final do vetor (vetor + tamanho))

    cout << endl << "Vetor ordenado:" << endl;

    for (int i = 0; i < n; i++){
        cout << vetor[i] << " | ";
    }

    cout << endl;

    return 0;
}