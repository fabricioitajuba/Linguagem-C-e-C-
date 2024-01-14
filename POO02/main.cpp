/*
Passagem de parâmetros
*/

#include <iostream>
#include "classe.h"

using namespace std;

void print(Cidade &Itajuba, string &name){
    cout << name <<" ano= " << Itajuba.getAno() << endl;
}

int main(){

    string nome("Itajubá"); //String

    Cidade Itajuba(1990);   //Objeto

    //Passagem por referência
    print(Itajuba, nome);

    return 0;
}