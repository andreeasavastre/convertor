//
//  Arie.cpp
//  Convertor
//
//  Created by dorneanu andreea on 05/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Arie.hpp"
#include <iostream>
using namespace std;

void arie(int language) {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza metru patrat)
    const float a = 100;
    const float ac = 4046.856119;
    const float cm = 0.0001;
    const float ft = 0.0929;
    const float ha = 10000;
    const float in = 0.0006452;
    const float km = 1000000;
    const float mm = 0.000001;
    const float yd = 0.836127816;
    if (language == 0){
        cout << "conversie arie\n";
        cout << "valoare?\n";
    }
    else {
        cout << "aria conversion\n";
        cout << "value?\n";
    }
    cin >> valoare;
    if (language == 0){
     cout << "unitatea initiala\n";
    }
    else {
        cout << "initial unit\n";
    }
    void afisareUnitatiArie();
    afisareUnitatiArie();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * a;
            break;
        case 2:
            aux = (float)valoare * ac;
            break;
        case 3:
            aux = (float)valoare * cm;
            break;
        case 4:
            aux = (float)valoare * ft;
            break;
        case 5:
            aux = (float)valoare * ha;
            break;
        case 6:
            aux = (float)valoare * in;
            break;
        case 7:
            aux = (float)valoare * km;
            break;
        case 8:
            aux = valoare;
            break;
        case 9:
            aux = (float)valoare * mm;
            break;
        case 10:
            aux = (float)valoare * yd;
        default:
            break;
    }
    if (language == 0 ){
        cout << "unitatea dorita\n";
    }
    else {
        cout << "wanted unit\n";
    }
    afisareUnitatiArie();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / a;
            break;
        case 2:
            result = (float)aux / ac;
            break;
        case 3:
            result = (float)aux / cm;
            break;
        case 4:
            result = (float)aux / ft;
            break;
        case 5:
            result = (float)aux / ha;
            break;
        case 6:
            result = (float)aux / in;
            break;
        case 7:
            result = (float)aux / km;
            break;
        case 8:
            result = aux;
            break;
        case 9:
            result = (float)aux / mm;
            break;
        case 10:
            result = (float)aux / yd;
            break;
        default:
            break;
    }
    // std::cout.precision(2);
    std::cout.setf(std::ios::fixed);
    if (language == 0){
        cout << "resultatul este: " << result << "\n";
    }
    else{
        cout << "the result is: " << result << "\n";
    }
}

void afisareUnitatiArie() {
    cout << "1. a\n2. ac\n3. cm\n4. ft\n5. ha\n6. in\n7. km\n8. m\n9. mm\n10. yd\n";
}
