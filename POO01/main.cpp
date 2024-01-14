#include <iostream>
#include "classe.h"

using namespace std;

Cidade Itajuba(1990);
Cidade Lambari(1991);
Cidade Brasilia(1992);

int main(){

    cout << "Itajubá ano= " << Itajuba.getAno() << endl;
    cout << "Lambari ano= " << Lambari.getAno() << endl;
    cout << "Brasilia ano= " << Brasilia.getAno() << endl;

    return 0;
}