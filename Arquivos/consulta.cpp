/*
Consulta em arquivo
Programa nota
Autor: Fabrício Ribeiro
Data: 21/01/2024

Para complilar:
$ c++ -o consulta consulta.cpp

Para executar:
$ ./consulta

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //Criação do objeto para escrita eleitura no arquivo
    fstream arquivo;
    
    //Variáveis do programa
    string nome, nota, nome_procura;
    bool found = false;

    /*
    Tenta abrir o arquivo para leitura,
    caso não exista, exibe o erro.
    */
    arquivo.open("notas.txt");

    cout << "Qual nome deseja consultar? ";
    cin >> nome_procura; 

    if(arquivo.is_open()){

        while(!arquivo.eof()){

            arquivo >> nome >> nota;

            if(nome == nome_procura){

                cout << "A nota é: " << nota << endl;
                found = true;
                break;
            }
        }
        
        if(found == false){
            cout << "Não foi possível encontrar o nome!" << endl;
        }

        //Para fechar o arquivo:
        arquivo.close();
    }
    else{
        cout << "Não foi possível abrir o arquivo!" << endl;
    }

    return 0;
}