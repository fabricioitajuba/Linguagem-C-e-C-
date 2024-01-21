/*
Escrita e Leitura em arquivos
Programa nota
Autor: Fabrício Ribeiro
Data: 21/01/2024

Para complilar:
$ c++ -o nota nota.cpp

Para executar:
$ ./nota

*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //Criação do objeto para escrita eleitura no arquivo
    fstream arquivo;
    //Variáveis para armazenar strings
    string texto, nome, nota;
    //Variável para armazenar a opção
    char opc='s';

    /*
    Abre o arquivo para escrita, 
    se não existir é criado.
    Dessa maneira é incluído dado toda vez que 
    o programa é executado
    ios::app - app - append (inserção)
    */
    arquivo.open("notas.txt", ios::app);

    //Para escrever no arquivo:    
    while((opc == 's') or (opc == 'S')){

        //Armazenando o nome:
        cout << "Entre com o nome: ";
        cin >> nome;
        arquivo << nome << " - ";

        //Armazenando a nota:
        cout << "Entre com a nota: ";
        cin >> nota;
        arquivo << nota << endl;        

        //Finaliza a inserção
        cout << "Entre com um novo nome? ";
        cin >> opc;
        //system("cls"); //Limpa a tela no windos
        system("clear"); //Limpa a tela no linux
    }

    //Para fechar o arquivo:
    arquivo.close();

    //////////////////////////////////////

    /*
    Tenta abrir o arquivo para leitura,
    caso não exista, exibe o erro.
    */
    arquivo.open("notas.txt");

    if(arquivo.is_open()){

        cout << "Conteúdo lido do arquivo:" << endl;

        //Lendo todo o arquivo:
        while(getline(arquivo, texto)){
            cout << texto << endl;
        }        
                
        //Para fechar o arquivo:
        arquivo.close();
    }
    else{
        cout << "Não foi possível abrir o arquivo!" << endl;
    }

    return 0;
}