/*
Escrita em arquivos
Autor: Fabrício Ribeiro
Data: 21/01/2024
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //Criação do objeto para escrita no arquivo
    ofstream arquivoW;

    /*
    Abre o arquivo para escrita, 
    se não existir é criado.
    Dessa maneira o arquivo é excluído e criado
    novamente toda vez que o programa é executado
    */
    //arquivoW.open("arquivo.txt");

    /*
    Abre o arquivo para escrita, 
    se não existir é criado.
    Dessa maneira é incluído dado toda vez que 
    o programa é executado
    */
    arquivoW.open("arquivo.txt", ios::app);

    //Para escrever no arquivo:    
    arquivoW << "Dado 1" << endl;
    arquivoW << "Dado 2" << endl;
    arquivoW << "Dado 3" << endl;

    //Para fechar o arquivo:
    arquivoW.close();

    return 0;
}