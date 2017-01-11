//
//  Timp.cpp
//  Convertor
//
//  Created by dorneanu andreea on 05/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Timp.hpp"
#include <iostream>
using namespace std;

void timp() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza ora)
    const float as = 2.7777777;
    const float cs = 0.0000027;
    const float ds = 0.0000277;
    const float s = 0.0002777;
    const float min = 0.0166666;
    const float day = 24;
    const float week = 168;
    const float year = 8760;
    const float ma = 87537777777.77777;
    cout << "conversie timp\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiTimp();
    afisareUnitatiTimp();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * as;
            break;
        case 2:
            aux = (float)valoare * cs;
            break;
        case 3:
            aux = (float)valoare * ds;
            break;
        case 4:
            aux = (float)valoare * s;
            break;
        case 5:
            aux = (float)valoare * min;
            break;
        case 6:
            aux = valoare;
            break;
        case 7:
            aux = (float)valoare * day;
            break;
        case 8:
            aux = (float)valoare * week;
            break;
        case 9:
            aux = (float)valoare * year;
            break;
        case 10:
            aux = (float)valoare * ma;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiTimp();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / as;
            break;
        case 2:
            result = (float)aux / cs;
            break;
        case 3:
            result = (float)aux / ds;
            break;
        case 4:
            result = (float)aux / s;
            break;
        case 5:
            result = (float)aux / min;
            break;
        case 6:
            result = aux;
            break;
        case 7:
            result = (float)aux / day;
            break;
        case 8:
            result = (float)aux / week;
            break;
        case 9:
            result = (float)aux / year;
            break;
        case 10:
            result = (float)aux / ma;
            break;
        default:
            break;
    }
     std::cout.setf(std::ios::fixed);
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiTimp() {
    cout << "1. as\n2. cs\n3. ds\n4. s\n5. min\n6. h\n7. day\n8. week\n9. year\n10. ma\n";
}
