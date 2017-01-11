//
//  Viteza.cpp
//  Convertor
//
//  Created by dorneanu andreea on 05/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Viteza.hpp"
#include <iostream>
using namespace std;

void viteza() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza meterPerSec)
    const float cmPerMin = 0.0001666667;
    const float cmPerSec = 0.01;
    const float fph = 0.000084667;
    const float fps = 0.3048;
    const float ftPerMin = 0.00508;
    const float ips = 0.0254;
    const float kmPerHour =0.27777778;
    const float kmPerMin = 16.666667;
    const float kmPerSec = 1000;
    const float mPerHour = 0.000277778;
    const float mPerMin = 0.016666667;
    const float milePerSec = 1609.344;
    const float milePerMin = 26.8224;
    const float milePerHour = 0.44704;
    const float nmilePerHour = 0.5144;
    const float ydPerHour = 0.000254;
    const float ydPerMin = 0.015240004;
    const float ydPerSec = 0.9144002494;
    cout << "conversie viteza\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiViteza();
    afisareUnitatiViteza();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * cmPerMin;
            break;
        case 2:
            aux = (float)valoare * cmPerSec;
            break;
        case 3:
            aux = (float)valoare * fph;
            break;
        case 4:
            aux = (float)valoare * fps;
            break;
        case 5:
            aux = (float)valoare * ftPerMin;
            break;
        case 6:
            aux = (float)valoare * ips;
            break;
        case 7:
            aux = (float)valoare * kmPerHour;
            break;
        case 8:
            aux = (float)valoare * kmPerMin;
            break;
        case 9:
            aux = (float)valoare * kmPerSec;
            break;
        case 10:
            aux = (float)valoare * mPerHour;
            break;
        case 11:
            aux = (float)valoare * mPerMin;
            break;
        case 12:
            aux = (float)valoare * milePerSec;
            break;
        case 13:
            aux = (float)valoare * milePerMin;
            break;
        case 14:
            aux = (float)valoare * milePerHour;
            break;
        case 15:
            aux = (float)valoare * nmilePerHour;
            break;
        case 16:
            aux = (float)valoare * ydPerHour;
            break;
        case 17:
            aux = (float)valoare * ydPerMin;
            break;
        case 18:
            aux = (float)valoare * ydPerSec;
            break;
        case 19:
            aux = valoare;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiViteza();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / cmPerMin;
            break;
        case 2:
            result = (float)aux / cmPerSec;
            break;
        case 3:
            result = (float)aux / fph;
            break;
        case 4:
            result = (float)aux / fps;
            break;
        case 5:
            result = (float)aux / ftPerMin;
            break;
        case 6:
            result = (float)aux / ips;
            break;
        case 7:
            result = (float)aux / kmPerHour;
            break;
        case 8:
            result = (float)aux / kmPerMin;
            break;
        case 9:
            result = (float)aux / kmPerSec;
            break;
        case 10:
            result = (float)aux / mPerHour;
            break;
        case 11:
            result = (float)aux / mPerMin;
            break;
        case 12:
            result = (float)aux / milePerSec;
            break;
        case 13:
            result = (float)aux / milePerMin;
            break;
        case 14:
            result = (float)aux / milePerHour;
            break;
        case 15:
            result = (float)aux / nmilePerHour;
            break;
        case 16:
            result = (float)aux / ydPerHour;
            break;
        case 17:
            result = (float)aux / ydPerMin;
            break;
        case 18:
            result = (float)aux / ydPerSec;
            break;
        case 19:
            result = aux;
            break;
        default:
            break;
    }
     std::cout.setf(std::ios::fixed);
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiViteza() {
    cout << "1. cmPerMin\n2. cmPerSec\n3. fph\n4. fps\n5. ftPerMin\n6. ips\n7. kmPerHour\n8. kmPerMin\n9. kmPerSec\n10. mPerHour\n11. mPerMin\n12. milePerSec\n13. milePerMin\n14. milePerHour\n15. nmilePerHour\n16. ydPerHour\n17. ydPerMin\n18. ydPerSec\n19. meterPerSec\n";
}
