/*
Funções trigonométricas
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> 

using namespace std;

#define PI 3.14159265

int main(){

    float seno, cosseno, tangente;
    ofstream outFile;

    //Abre o arquivo, se ele existir, será apagado todo conteúdo
    outFile.open("test.txt", ios::out);

    cout << "Angulo " << " Sen  " << " Cos  " << " Tang" << endl;
    outFile << "Angulo " << " Sen  " << "  Cos  " << "  Tang" << endl;

    for(int i=0; i<=360; i++){

        seno = sin(i*PI/180);
        cosseno = cos(i*PI/180);
        tangente = tan(i*PI/180);

        //cout << i << " " << seno << " " << cosseno << " " << tangente << endl;
        printf("%3d     %0.3f %0.3f %0.3f\n", i, seno, cosseno, tangente);
        
        outFile << setw(3) << i << "     " << fixed << setprecision(3) << seno << "  " << setw(3) << cosseno << "  " << setw(3) << tangente << endl;
    }
    
    outFile.close();
    
    return 0;
}