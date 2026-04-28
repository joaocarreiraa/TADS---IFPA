#include <iostream>
using namespace std;
int main() {
    int idade;
    string nome;
    int resposta;
    cout << "digite seu nome: ";
    cin >> nome;
    cout << "Seu nome é: " <<nome << " ?" "\n [1] para sim \n[2] para não \n Digite: ";
    cin >> resposta;
    if (resposta = 1){
    cout << "digite a sua idade: ";
    cin >> idade;
    if (idade>=18){
        cout << "Seu nome é " << nome <<" e você é Maior de idade"<< endl;
    }else if (idade <18){ cout << "Senhor(a) " << nome << ", infelizmente você é menor de idade"<< endl;
    }
    }else if (resposta= 2){
        cout << "Sentimos muito, mas é isso kkkj"<< endl;
    }
    }
