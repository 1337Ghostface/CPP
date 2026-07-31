#include <iostream>
#include <string>

using namespace std;

int main() {

    // Exercicio 1

    float n1, n2;

    cout << "Exercicio 1 - Calculo simples." << endl;

    cout << "Insira o primeiro número: ";
    cin >> n1;

    cout << "Insira o segundo número: ";
    cin >> n2;

    cout << "Soma: " << (n1 + n2) << endl;
    cout << "Subtração: " << (n1 - n2) << endl;
    cout << "Divisão: " << (n1 / n2) << endl;
    cout << "Multiplicação: " << (n1 * n2) << endl;

    cout << "Fim do exercicio 1." << endl << endl;

    //Fim


    //Exercicio 2

    cout << "Exercicio 2 - Maior ou menor de idade" << endl;

    int idade = 0;

    cout << "Digite a sua idade: ";
    cin >> idade;

    if (idade < 18) {
        cout << "Menor de idade." << endl;
    }
    else {
        cout << "Maior de idade." << endl;
    }

    cout << "Fim do exercicio 2." << endl << endl;

    //Fim


    //Exercicio 3

    int num;

    cout << "Exercicio 3 - Positivo ou negativo." << endl;

    cout << "Insira um número: ";
    cin >> num;

    if (num >= 0) {
        cout << "Número positivo." << endl;
    }
    else{
        cout << "Número negativo." << endl;
    }

    cout << "Fim do exercicio 3." << endl << endl;

    //Fim


    //Exercicio 4

    cout << "Exercicio 4 - Qual o maior numero." << endl;

    int vet[3], maior;
    
    for (int i = 0; i < 3; i++) {
        cout << "Digite o " << (i + 1) << "º número:";
        cin >> vet[i];
    }
    maior = vet[0];

    for (int i = 1; i < 3; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    cout << "O número maior é: " << maior << endl;

    cout << "Fim do exercicio 4." << endl << endl;

    //Fim

    
    //Exercicio 5

    cout << "Exercicio 5 - Calcular com switch case." << endl;

    char opcao;

    cout << "Digite o 1º número que quer calcular: ";
    cin >> n1;

    do {
        cout << "Selecione o tipo de operação (+, -, /, *): ";
        cin >> opcao;
        if (opcao != '+' && opcao != '-' && opcao != '/' && opcao != '*') {
            cout << "Operação inválida. Tente novamente.";
        }
    } while (opcao != '+' && opcao != '-' && opcao != '/' && opcao != '*');

    cout << "Digite o 2º número que quer calcular: ";
    cin >> n2;

    switch (opcao) {
    
        case '+':
            cout << n1 + n2 << endl;
        break;

        case '-':
            cout << n1 - n2 << endl;
        break;

        case '*':
            cout << n1 * n2 << endl;
        break;

        case '/':
            cout << n1 / n2 << endl;
        break;

    }

    cout << "Fim do exercicio 5." << endl << endl;

    //Fim
    

    //Exercicio 6

    cout << "Exercicio 6 - Mostrar todos até o inserido" << endl;

    int inserido;

    cout << "Digite um número: ";
    cin >> inserido;

    for (int i = 0; i < inserido; i++) {
        cout << (i + 1) << ". ";
    }

    cout << endl;

    cout << "Fim do exercicio 6." << endl << endl;

    //Fim


    //Exercicio 7

    cout << "Exercicio 7 - Soma 5 numeros inteiros" << endl;

    int num_int[5], soma=0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o " << (i + 1) << "º numero: ";
        cin >> num_int[i];
        soma += num_int[i];
    }

    cout << "A soma é de: " << soma << endl;

    cout << "Fim do exercicio 7." << endl << endl;

    //Fim


    //Exercicio 8

    cout << "Exercicio 8 - tabuada" << endl;

    cout << "Selecione um numero: ";
    cin >> n1;

    for (int i = 0; i < 10; i++) {
        cout << n1 << " x " << (i + 1) << " = " << n1 * (i+1) << endl;
    }

    cout << "Fim do exercicio 8." << endl << endl;

    //Fim


    //Exercicio 9

    cout << "Exercicio 9 - repetir numeros" << endl;

    int n3 = 0;
    soma = 0;

    cout << "Insira numeros. Para terminar, prima 0: " << endl;
    cin >> n3;
    soma = n3;
    
    do {
        cin >> n3;
        soma += n3;
    } while (n3 != 0);

    cout << "A soma de todos os numeros é de: " << soma << endl;
    
    cout << "Fim do exercicio 9." << endl << endl;

    //Fim


    //Exercicio 10

    cout << "Exercicio 10 - " << endl;

    int n4;

    soma = 0;

    cout << "Insira um numero positivo: ";
    cin >> n4;

    soma = n4;

    for (int i = n4; i > 1; i--) {
        soma = soma * (i - 1);
    }

    cout << "O fatorial de " << n4 << " é: " << soma << endl;

    cout << "Fim do exercicio 9." << endl << endl;

    //Fim

    return 0;
}