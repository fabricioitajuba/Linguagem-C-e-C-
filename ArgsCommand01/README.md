# Criando um comando em C ou C++

Este exemplo cria um simples comando que soma vários números e pode ser executado na linha de comando.

Programa:
```
/*
Criando comandos em C ou C++
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int resultado=0;

    for(int i=1; i<argc; i++){
        resultado += atoi(argv[i]);
    }

    cout << "A soma é = " << resultado << endl;

    return 0;
}
```

## Para compilar:

$ g++ -o soma main.cpp

## Para executar:

$ ./soma n1 n2 n3 ... nn

Alguns exemplos:

```
$ ./soma 1 2
$ A soma é = 3
$ ./soma 1 2 3 4 5
$ A soma é = 15
```

