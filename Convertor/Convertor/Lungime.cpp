//
//  Lungime.cpp
//  Convertor
//
//  Created by dorneanu andreea on 03/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include <iostream>
#include "Lungime.hpp"
using namespace std;

void lungime(int language) {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza mm)
    const float cm = 10;
    const float ft = 304.8;
    const float in = 25.4;
    const float km = 1000000;
    const float m = 1000;
    const float mi = 1609344;
    const float nmi = 1852000;
    const float yd = 914.4002494;
    if(language == 0){
        cout << "conversie lungime\n";
        cout << "valoare?\n";}
    else {
        cout << "lenght conversion\n";
        cout << "value?\n";
    }
    cin >> valoare;
    if(language == 0){
        cout << "unitatea initiala\n";
    }
    else{
        cout << "initial unit\n";
    }
    void afisareUnitatiLungime();
    afisareUnitatiLungime();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * cm;
            break;
        case 2:
            aux = (float)valoare * ft;
            break;
        case 3:
            aux = (float)valoare * in;
            break;
        case 4:
            aux = (float)valoare * km;
            break;
        case 5:
            aux = (float)valoare * m;
            break;
        case 6:
            aux = (float)valoare * mi;
            break;
        case 7:
            aux = valoare;
            break;
        case 8:
            aux = (float)valoare * nmi;
            break;
        case 9:
            aux = (float)valoare * yd;
            break;
        default:
            break;
    }
    if(language == 0){
        cout << "unitatea dorita\n";
    }
    else{
        cout << "wanted unit\n";
    }
    afisareUnitatiLungime();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / cm;
            break;
        case 2:
            result = (float)aux / ft;
            break;
        case 3:
            result = (float)aux / in;
            break;
        case 4:
            result = (float)aux / km;
            break;
        case 5:
            result = (float)aux / m;
            break;
        case 6:
            result = (float)aux / mi;
            break;
        case 7:
            result = aux;
            break;
        case 8:
            result = (float)aux / nmi;
            break;
        case 9:
            result = (float)aux / yd;
            break;
        default:
            break;
    }
    std::cout.setf(std::ios::fixed);
    if(language == 0){
        cout << "resultatul este: " << result << "\n";
    }
    else{
        cout << "the result is: " << result << "\n";
    }
}

void afisareUnitatiLungime() {
    cout << "1. cm\n2. ft\n3. in\n4. km\n5. m\n6. mi\n7. mm\n8. nmi\n9. yd\n";
}
