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

void consumCombustibil(int language) {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza l/100km)
    // const float millespergal = 235.215;
    const float kmperl = 100;
    if (language == 0){
        cout << "conversie consum Combustibil\n";
        cout << "valoare?\n";
    }
    else {
        cout << "fuel economy conversion\n";
        cout << "value?\n";
    }
    cin >> valoare;
    if (language == 0){
        cout << "unitatea initiala\n";
    }
    else {
        cout << "initial unit\n";
    }
    void afisareUnitatiConsumCombustibil();
    afisareUnitatiConsumCombustibil();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float) 454.609 / (1.609344 * valoare);
            break;
        case 2:
            aux = (float) 100 / aux;
            break;
        case 3:
            aux = valoare;
            break;
        default:
            break;
    }
    if ( language == 0){
        cout << "unitatea dorita\n";
    }
    else {
        cout << "wanted unit\n";
    }
    afisareUnitatiConsumCombustibil();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float) (454.609) / (1.609344 * aux);
            break;
        case 2:
            result = (float) 100 / aux;
            break;
        case 3:
            result = aux;
            break;
        default:
            break;
    }
    std::cout.setf(std::ios::fixed);
        if (language == 0){
            cout << "resultatul este: " << result << "\n";
        }
        else{
            cout << "the result is: " << result << "\n";
        }
}

void afisareUnitatiConsumCombustibil() {
    cout << "1. milles/gal\n2. km/l\n3. l/100km\n";
}
