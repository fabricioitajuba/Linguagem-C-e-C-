# Exemplos de programas em C e C++

## Instalação dos compiladores C e C++ no linux

- Crie uma pasta em um local específico para colocar os programas feitos em C ou C++;

- Abra o terminal

$ sudo apt update

$ sudo apt install gcc g++ clang gdb

## Configurando o VSCODE

- Abra o VSCODE;

- Instale a extensão "C/C++ da Microsoft";

- Instale a extensão "Code Runner";

- Direcione a pasta de projetos do VSCODE para a pasta criada anteriormente;

## Criando um simples exemplo

- Crie uma nova pasta com o nome ex: EX01-Hello

- Crie um novo arquivo com o nome hello.cpp

- Entre com o seguinte programa:
  
```
#include <iostream>

using namespace std;

int main(){

    cout<<"Hello World!"<<endl;
    return 0;
}
```

- Salve o arquivo;

- Para compilar e executar, pressione o botão no canto superior direito com o nome "Run Code" ou "Ctrl+Alt+N";

- Abaixo da tela, será aberto um terminal com a saída do programa.

- obs: na pasta do projeto terá o arquivo fonte e o binário.

## Compilando e executando um program sem o VSCODE

- Vá na pasta do programa;

- Se for um programa feito em "C" digite a seguinte linha de comando:

  $ gcc hello.c -o hello

- Se for um programa feito em "C++" digite a seguinte linha de comando:

  $ g++ hello.cpp -o hello

- Para executar:

- $ ./hello
