/*Exemplo de programa utilizando ponteiros
Autor: Fabrício Ribeiro
Data: 13/01/2024
*/

#include <iostream>

using namespace std;

int main(){

    int *pv, valor, *teste; //pv é um ponteiro int e valor é uma variável int

    valor = 3;

    pv = &valor;    //pv recebe o endereço de valor
    *pv = valor;    //pv recebe a variável presente em valor

    cout << "Endereço da variável valor = " << pv << endl;
    cout << "Variável valor = " << *pv << endl;

    *pv = 3;    //pv recebe o valor 3

    cout << "Endereço de pv = " << pv << endl;
    cout << "Valor presente em pv = " << *pv << endl;

    return 0;
}
