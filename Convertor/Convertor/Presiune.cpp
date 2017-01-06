//
//  Presiune.cpp
//  Convertor
//
//  Created by dorneanu andreea on 06/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Presiune.hpp"
#include <iostream>
using namespace std;

void Presiune() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza psi)
    const float bar = 14.213698297557126;
    const float atm = 14.695988486842547;
    const float mmHg = 0.01933677470461073;
    cout << "conversie presiune\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiPresiune();
    afisareUnitatiPresiune();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * bar;
            break;
        case 2:
            aux = (float)valoare * atm;
            break;
        case 3:
            aux = (float)valoare * mmHg;
            break;
        case 4:
            aux = valoare;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiPresiune();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / bar;
            break;
        case 2:
            result = (float)aux / atm;
            break;
        case 3:
            result = (float)aux / mmHg;
            break;
        case 4:
            result = aux;
            break;
        default:
            break;
    }
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiPresiune() {
    cout << "1. bar\n2. atm\n3. mmHg\n4. psi\n";
}
