#include <iostream>
#include "voiture.h"
#include "moto.h"

using std::cout;
using std::endl;

void checkupAvantVente(Vehicule& v){
    v.effectuerEntretien();
}

int main(){

    Voiture voiture;
    Moto moto;

    checkupAvantVente(voiture);
    checkupAvantVente(moto);

    return 0;
}

