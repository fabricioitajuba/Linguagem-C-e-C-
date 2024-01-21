/*
Leitura em arquivos
Autor: Fabrício Ribeiro
Data: 21/01/2024
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //Criação do objeto para leitura no arquivo
    ifstream arquivoR;
    //Variável para armazenar a leitura do arquivo
    string texto;

    /*
    Tenta abrir o arquivo para leitura,
    caso não exista, exibe o erro.
    */
    arquivoR.open("arquivo.txt");

    if(arquivoR.is_open()){

        //Lendo todo o arquivo:
        while(getline(arquivoR, texto)){
            cout << texto << endl;
        }        

        //Para fechar o arquivo:
        arquivoR.close();
    }
    else{
        cout << "Não foi possível abrir o arquivo!" << endl;
    }

    return 0;
}