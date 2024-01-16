/*
Criando comandos em C ou C++
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int resultado=0;

    for(int i=1; i<argc; i++){
        resultado = resultado + atoi(argv[i]);
    }

    cout << "A soma é = " << resultado << endl;

    return 0;
}