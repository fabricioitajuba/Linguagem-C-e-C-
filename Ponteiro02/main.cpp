/*
Passagem por referência
*/

#include <iostream>

using namespace std;

//Passagem por referência
void referencia(int &c){
    c = c + 1;
    cout << "Por referência x= " << c << endl;
}

int main(){

    int x;

    x = 50;

    cout << "Valor inicial de x= " << x << endl;
    referencia(x);  //Passagem por referência
    cout << "Atual valor de x= " << x << endl;

    return 0;
}
