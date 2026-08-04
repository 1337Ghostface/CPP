#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int maior, menor, tamanho = 0, pares = 0; 
    float media = 0;

    cout << "Digite o tamanho do vetor necessário: ";
    cin >> tamanho;

    int vet[tamanho];

    cout << "Insira os valores: " << endl;

    for (int i = 0; i < tamanho; i++){
        
        cin >> vet[i];
        
        if (vet[i] % 2 == 0){
            pares++;
        }
        
        media += vet[i];
        
    }

    maior = vet[0];
    menor = vet[0];
    
    for (int i = 0; i < tamanho; i++){
        cout << vet[i] << ". ";

        if (vet[i] > maior){
            maior = vet[i];
        }
        
        else{
            menor = vet[i];
        }
    }

    cout << endl;
    cout << "O maior número do vetor é: " << maior << endl;
    cout << "O menor número é: " << menor << endl;
    cout << "A média é de: " << (media / tamanho) << endl;
    cout << pares << " desses números são par." << endl; 
    

    return 0;
}