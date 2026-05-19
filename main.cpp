#include <iostream>
using namespace std;

int main(){
int escolha;
int dia;

cout << "Escolha:\n (1) Trancar o curso \n (2) Falar com o coordenador \n (3) Carga Horária e afins...\n Digite: ";
cin >> escolha;
switch (escolha){
    case 1:
    cout << "Sinto muito, mas vai ter que tá cursando kkkj";
    break;
    
    case 2:
    cout << "Dias disponívies: \n(1) Dia 30 de fev\n(2) Dia 31 de dez\n(3) Dia 02 de jan/2027\nSelecione o dia para falar: ";
    cin >> dia;
    switch (dia){
        case 1:
        cout << "Ok, ele nunca vai lhe atender";
        break;
        
        case 2: 
        cout << "Ok, ele nao virá";
        break;
        
        case 3:
        cout << "Ele ta de ferias";
        break;
        
    }
    break;
    
    case 3:
    cout << "Só tem uma matéria: \n LIBRAS";
    break;
}

return 0;
}

