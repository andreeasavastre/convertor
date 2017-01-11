//
//  Volum.cpp
//  Convertor
//
//  Created by dorneanu andreea on 05/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Volum.hpp"
#include <iostream>
using namespace std;

void volum() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza litru)
    const float cl = 0.01;
    const float cm = 0.001;
    const float dl = 0.1;
    const float dm = 1;
    const float ft = 28.32;
    const float gal = 3.785;
    const float in = 0.01638;
    const float ml = 0.001;
    const float m = 1000;
    const float yd = 764.56;
    cout << "conversie volum\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiVolum();
    afisareUnitatiVolum();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * cl;
            break;
        case 2:
            aux = (float)valoare * cm;
            break;
        case 3:
            aux = (float)valoare * dl;
            break;
        case 4:
            aux = (float)valoare * dm;
            break;
        case 5:
            aux = (float)valoare * ft;
            break;
        case 6:
            aux = (float)valoare * gal;
            break;
        case 7:
            aux = (float)valoare * in;
            break;
        case 8:
            aux = valoare;
            break;
        case 9:
            aux = (float)valoare * ml;
            break;
        case 10:
            aux = (float)valoare * m;
            break;
        case 11:
            aux = (float)valoare * yd;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiVolum();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / cl;
            break;
        case 2:
            result = (float)aux / cm;
            break;
        case 3:
            result = (float)aux / dl;
            break;
        case 4:
            result = (float)aux / dm;
            break;
        case 5:
            result = (float)aux / ft;
            break;
        case 6:
            result = (float)aux / gal;
            break;
        case 7:
            result = (float)aux /in;
            break;
        case 8:
            result = aux;
            break;
        case 9:
            result = (float)aux / ml;
            break;
        case 10:
            result = (float)aux / m;
            break;
        case 11:
            result = (float)aux / yd;
            break;
        default:
            break;
    }
     std::cout.setf(std::ios::fixed);
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiVolum() {
    cout << "1. cl\n2. cm\n3. dl\n4. dm\n5. ft\n6. gal\n7. in\n8. l\n9. ml\n10. m\n11. yd\n";
}
