/*
Funções trigonométricas
*/

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265

int main(){

    float seno, cosseno, tangente;

    cout << "Angulo " << " Sen  " << " Cos  " << " Tang" << endl;

    for(int i=0; i<=360; i++){

        seno = sin(i*PI/180);
        cosseno = cos(i*PI/180);
        tangente = tan(i*PI/180);

        //cout << i << " " << seno << " " << cosseno << " " << tangente << endl;
        printf("%3d     %0.3f %0.3f %0.3f\n", i, seno, cosseno, tangente);
    }

    return 0;
}