# Enviando argumentos em C ou C++

Este exemplo mostra como os argumentos são passados através da linha de comando:

Ex:

```
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
```

- A variável argc, possui o número de argumentos passados;

- O vetor argv[], possui os argumentos passados;

## Para compilar:

$ g++ -o args main.cpp

## Para executar:

$ ./args 1 2 3 4 5

Resultado

```
$ ./args 1 2 3 4 5

argc= 6
argv[0] = ./args
argv[1] = 1
argv[2] = 2
argv[3] = 3
argv[4] = 4
argv[5] = 5

$
```

