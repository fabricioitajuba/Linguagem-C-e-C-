/*
Escrita e Leitura em arquivos
Autor: Fabrício Ribeiro
Data: 21/01/2024
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //Criação do objeto para escrita eleitura no arquivo
    fstream arquivo;
    //Variável para armazenar a leitura do arquivo
    string texto;

    /*
    Abre o arquivo para escrita, 
    se não existir é criado.
    Dessa maneira o arquivo é excluído e criado
    novamente toda vez que o programa é executado
    */
    arquivo.open("arquivo.txt");

    //Para escrever no arquivo:    
    arquivo << "Dado 1" << endl;
    arquivo << "Dado 2" << endl;
    arquivo << "Dado 3" << endl;

    //Para fechar o arquivo:
    arquivo.close();

    //////////////////////////////////////

    /*
    Tenta abrir o arquivo para leitura,
    caso não exista, exibe o erro.
    */
    arquivo.open("arquivo.txt");

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