/*
Consulta em arquivo
Programa nota
Autor: Fabrício Ribeiro
Data: 21/01/2024

Para complilar:
$ c++ -o nota2 nota2.cpp

Para executar:
$ ./nota2

*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //Criação do objeto para escrita eleitura no arquivo
    fstream arquivo;
    //Variáveis para armazenar strings
    string texto;

    /*
    Tenta abrir o arquivo para leitura,
    caso não exista, exibe o erro.
    */
    arquivo.open("notas.txt");

    if(arquivo.is_open()){

        cout << "Conteúdo lido do arquivo:" << endl;

        int n=0;
        //Lendo todo o arquivo:
        while(getline(arquivo, texto)){
            cout << texto << endl;
            n ++;
        }        
        
        cout << "O arquivo possui: " << n << " linhas" << endl;

        //Zerando o ponteiro do arquivo
        arquivo.clear();
        arquivo.seekg(0);

        //lendo a linha 3
        n=3;
        cout << "\nLendo a linha " << n << ":"<< endl;

        for(int i=1; i<=n; i++){
            getline(arquivo, texto);
        }
        cout << texto << endl;
        
        //Para fechar o arquivo:
        arquivo.close();
    }
    else{
        cout << "Não foi possível abrir o arquivo!" << endl;
    }

    return 0;
}