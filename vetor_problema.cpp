#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int vetor1[5], vetor2[5], menor;

    cout << "Insira os números: " << endl;

    for (int i = 0; i < 5; i++){
        cin >> vetor1[i];
    }

    cout << endl;

    menor = vetor1[0];

    for (int i = 0; i < 5; i++){

        if (vetor1[i] < menor){
            menor = vetor1[i];
        }
    }

    for (int i = 0; i < 5; i++){
        cout << vetor2[i] << ". ";
    }
    
    
    return 0;
}