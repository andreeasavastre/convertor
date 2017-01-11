//
//  Masa.cpp
//  Convertor
//
//  Created by dorneanu andreea on 06/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Masa.hpp"
#include <iostream>
using namespace std;

void masa() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza kg)
    const float g = 0.001;
    const float lb = 0.453592;
    const float mg = 0.000001;
    const float oz = 0.0311035;
    const float slug = 14.593903;
    const float t = 1000;
    cout << "conversie masa\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiMasa();
    afisareUnitatiMasa();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * g;
            break;
        case 2:
            aux = (float)valoare * lb;
            break;
        case 3:
            aux = (float)valoare * mg;
            break;
        case 4:
            aux = (float)valoare * oz;
            break;
        case 5:
            aux = (float)valoare * slug;
            break;
        case 6:
            aux = (float)valoare * t;
            break;
        case 7:
            aux = valoare;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiMasa();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / g;
            break;
        case 2:
            result = (float)aux / lb;
            break;
        case 3:
            result = (float)aux / mg;
            break;
        case 4:
            result = (float)aux / oz;
            break;
        case 5:
            result = (float)aux / slug;
            break;
        case 6:
            result = (float)aux / t;
            break;
        case 7:
            result = aux;
            break;
        default:
            break;
    }
     std::cout.setf(std::ios::fixed);
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiMasa() {
    cout << "1. g\n2. lb\n3. mg\n4. oz\n5. slug\n6. t\n7. kg\n";
}
