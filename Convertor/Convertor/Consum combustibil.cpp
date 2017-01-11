//
//  Consum combustibil.cpp
//  Convertor
//
//  Created by dorneanu andreea on 11/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Consum combustibil.hpp"
#include <iostream>
using namespace std;

void consumCombustibil() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza l/100km)
    const float millespergal = 235.215;
    const float kmperl = 100;
    cout << "conversie consum Combustibil\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiConsumCombustibil();
    afisareUnitatiConsumCombustibil();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * millespergal;
            break;
        case 2:
            aux = (float)valoare * kmperl;
            break;
        case 3:
            aux = valoare;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiConsumCombustibil();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / millespergal;
            break;
        case 2:
            result = (float)aux / kmperl;
            break;
        case 3:
            result = aux;
            break;
        default:
            break;
    }
    std::cout.setf(std::ios::fixed);
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiConsumCombustibil() {
    cout << "1. milles/gal\n2. km/l\n3. l/100km\n";
}
