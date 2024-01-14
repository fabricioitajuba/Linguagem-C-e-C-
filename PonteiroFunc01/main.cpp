/*
Passagem de parâmetros
*/

#include <iostream>

using namespace std;

//Passagem por valor
void valor(int a){
    a = a +1;
    cout << "Por valor x= " << a << endl;
}

//Passagem por ponteiro
void ponteiro(int *b){
    *b = *b + 1;
    cout << "Por ponteiro x= " << *b << endl;
}

//Passagem por referência
void referencia(int &c){
    c = c + 1;
    cout << "Por referência x= " << c << endl;
}

int main(){

    int x;

    x = 50;

    valor(x);       //Passagem por valor
    ponteiro(&x);   //Passagem por ponteiro
    referencia(x);  //Passagem por referência

    return 0;
}
