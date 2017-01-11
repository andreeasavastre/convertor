//
//  Energie.cpp
//  Convertor
//
//  Created by dorneanu andreea on 06/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Energie.hpp"
#include <iostream>
using namespace std;

void energie() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza kcal)
    const float Btu = 0.2519967516958058;
    const float cal = 0.001;
    const float erg = 2.388458966274959e-11;
    const float ftlbf = 0.00032383155353286517;
    const float j = 0.00023884589662749592;
    const float kj = 0.23884589662749592;
    const float kwh = 859.8452278589854;
    const float tep = 10000000;
    cout << "conversie energie\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiEnergie();
    afisareUnitatiEnergie();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * Btu;
            break;
        case 2:
            aux = (float)valoare * cal;
            break;
        case 3:
            aux = (float)valoare * erg;
            break;
        case 4:
            aux = (float)valoare * ftlbf;
            break;
        case 5:
            aux = (float)valoare * j;
            break;
        case 6:
            aux = (float)valoare * kj;
            break;
        case 7:
            aux = (float)valoare * kwh;
            break;
        case 8:
            aux = (float)valoare * tep;
            break;
        case 9:
            aux = valoare;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiEnergie();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / Btu;
            break;
        case 2:
            result = (float)aux / cal;
            break;
        case 3:
            result = (float)aux / erg;
            break;
        case 4:
            result = (float)aux / ftlbf;
            break;
        case 5:
            result = (float)aux / j;
            break;
        case 6:
            result = (float)aux / kj;
            break;
        case 7:
            result = (float)aux / kwh;
            break;
        case 8:
            result = (float)aux / tep;
            break;
        case 9:
            result = aux;
            break;
        default:
            break;
    }
     std::cout.setf(std::ios::fixed);
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiEnergie() {
    cout << "1. Btu\n2. cal\n3. erg\n4. ftlbf\n5. j\n6. kj\n7. kwh\n8. tep\n9. kcal\n";
}
