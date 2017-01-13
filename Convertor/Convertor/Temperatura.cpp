//
//  Temperatura.cpp
//  Convertor
//
//  Created by dorneanu andreea on 06/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Temperatura.hpp"
#include <iostream>
using namespace std;

void temperatura(int language) {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza grade Celsius)
    const float gradeFahrenheit  = -17.22222222;
    const float gradeKelvin = -272.15;
    const float gradeRankine = -272.5944444;
    if (language == 0){
        cout << "conversie temperatura\n";
        cout << "valoare?\n";
    }
    else {
        cout << "temperature conversion\n";
        cout << "value?\n";
    }
    cin >> valoare;
    if (language == 0){
        cout << "unitatea initiala\n";
    }
    else {
        cout << "initial unit\n";
    }
    void afisareUnitatiTemperatura();
    afisareUnitatiTemperatura();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)(valoare - 32) * 0.5556 ;
            break;
        case 2:
            aux = (float)valoare - 273.15;
            break;
        case 3:
            aux = (float)(valoare - 491.67) / 1.8;
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
    afisareUnitatiTemperatura();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)(aux * 1.8) + 32;
            break;
        case 2:
            result = (float)aux + 273.15;
            break;
        case 3:
            result = (float)aux * 1.8 + 491.67;
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

void afisareUnitatiTemperatura() {
    cout << "1. Fahrenheit grade\n2. Kelvin grade\n3.  Rankine grade\n4. Celsius grade\n";
}
