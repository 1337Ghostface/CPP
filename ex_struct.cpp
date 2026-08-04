#include <iostream>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    int idade;
    float nota;
};


int main() {

    struct Aluno a[5];
    float media = 0;
    int melhor = 0, aprovado = 0, melhorAluno = 0;
    
    for (int i = 0; i < 5; i++){
        cout << "Insira o nome do " << (i+1) << "º aluno: ";
        cin >> a[i].nome;
        cout << "Insira a idade: ";
        cin >> a[i].idade;
        do{
            cout << "Insira a nota: ";
            cin >> a[i].nota;
                if (a[i].nota < 0 || a[i].nota > 20){
                    cout << "Nota inválida. Insira novamente." << endl;
                }
                if (a[i].nota >= 10){
                    aprovado++;
                }
                if (a[i].nota > melhor){
                    melhor = a[i].nota;
                    melhorAluno = i;
                }
                
                
        } while (a[i].nota < 0 || a[i].nota > 20);
        
    }

    cout << endl;

    for (int i = 0; i < 5; i++){
        cout << "Os detalhes do " << (i+1) << "º aluno são: " << endl;
        cout << "Nome: " << a[i].nome << ". Idade: " << a[i].idade << ". Nota: " << a[i].nota << "." << endl << endl;
    }
    
    cout << "O melhor aluno foi " << a[melhorAluno].nome << ". Com nota " << a[melhorAluno].nota << "." << endl;
    cout << aprovado << " alunos ficaram aprovados.";

    return 0;
}