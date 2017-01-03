//
//  UnitatiMasura.cpp
//  Convertor
//
//  Created by dorneanu andreea on 03/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "UnitatiMasura.hpp"
#include <iostream>
using namespace std;

void lungime() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    cout << "conversie lungime\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiLungime();
    afisareUnitatiLungime();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = valoare * 10;
            break;
        case 5:
            aux = valoare * 1000;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiLungime();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = aux / 10;
            break;
        case 5:
            result = aux / 1000;
            break;
        default:
            break;
    }
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiLungime() {
    cout << "1. cm\n2. ft\n3. in\n4. km\n5. m\n6. mi\n7. mm\n8. nmi\n9. yd";
}
