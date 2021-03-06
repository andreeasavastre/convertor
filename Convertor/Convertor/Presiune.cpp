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

void presiune(int language) {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza psi)
    const float bar = 14.213698297557126;
    const float atm = 14.695988486842547;
    const float mmHg = 0.01933677470461073;
    if (language == 0){
        cout << "conversie presiune\n";
        cout << "valoare?\n";
    }
    else {
        cout << "pressure conversion\n";
        cout << "value?\n";
    }
    cin >> valoare;
    if (language == 0){
        cout << "unitatea initiala\n";
    }
    else {
        cout << "initial unit\n";
    }
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
    if (language == 0){
        cout << "unitatea dorita\n";
    }
    else {
        cout << "wanted unit\n";
    }
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
    std::cout.setf(std::ios::fixed);
    if (language == 0){
        cout << "resultatul este: " << result << "\n";
    }
    else {
        cout << "the result is: " << result << "\n";
    }
}

void afisareUnitatiPresiune() {
    cout << "1. bar\n2. atm\n3. mmHg\n4. psi\n";
}
