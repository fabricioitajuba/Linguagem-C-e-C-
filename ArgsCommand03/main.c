/*
Criando comandos
Fonte:
https://daemoniolabs.wordpress.com/2011/10/07/usando-com-as-funcoes-getopt-e-getopt_long-em-c/

Este programa utiliza a função "getopt"

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