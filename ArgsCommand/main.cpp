/*
Criando comandos em C ou C++
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    cout << "argc= " << argc << endl;

    for(int i=0; i<argc; i++){
        cout << "argv[" << i << "] = ";
        cout << argv[i] << endl;
    }

    return 0;
}