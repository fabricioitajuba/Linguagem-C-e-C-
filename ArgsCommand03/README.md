# Criando comandos

Fonte:

https://daemoniolabs.wordpress.com/2011/10/07/usando-com-as-funcoes-getopt-e-getopt_long-em-c/

Este exemplo utiliza a função "getopt()"

Programa:

```
/*
Criando comandos

Autor: Fabrício Ribeiro
Data: 20/01/2024
*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv){

    char *nome=NULL;

    int opt ;

    while( (opt = getopt(argc, argv, "abn:")) > 0 ) {
        switch ( opt ) {
            case 'a':
                printf("Escolhida a opção: -a\n");
                break;
            case 'b':
                printf("Escolhida a opção: -b\n");
                break;
            case 'n':
                nome = optarg;
                printf("Seu nome é: %s\n", nome);
                break;
            default:
                printf("Opcao invalida ou faltando argumento:\n") ;
                return -1 ;
        }
    }

    return 0;
}
```

Na linha:

while( (opt = getopt(argc, argv, "abn:")) > 0 ) {

"abn:"

a - executa "case 'a'" sem entrada de argumento;
b - executa "case 'b'" sem entrada de argumento;
n: - executa "case 'n'" com entrada de argumento, no caso o nome;

- Para compilar:

$ gcc -o comando main.c

- Para executar - ex1:

$ ./comando -a

Escolhida a opção: -a

- Para executar - ex2:

$ ./comando -b

Escolhida a opção: -b

- Para executar - ex3:

$ ./comando -ab

Escolhida a opção: -a
Escolhida a opção: -b

- Para executar - ex4:

./comando -n 'fabricio'

Seu nome é: fabricio

- Para executar - ex5:

./comando -abn 'fabricio'

Escolhida a opção: -a
Escolhida a opção: -b
Seu nome é: fabricio
