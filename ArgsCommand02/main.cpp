/*
Linha de comando
Autor: Fabrício Ribeiro
Data: 20/01/2024
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    string opt;

    opt = argv[1];

    if(opt == "-a")
        cout << "Argumento -a" << endl;
    else if(opt == "-b")
        cout << "Argumento -b" << endl;
    else if(opt == "-c")
        cout << "Argumento -c" << endl;
    else
        cout << "Nenhum argumento válido passado!" << endl;

    return 0;
}