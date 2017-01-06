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

void temperatura() {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza grade Celsius)
    const float gradeFahrenheit  = -17.22222222;
    const float gradeKelvin = -272.15;
    const float gradeRankine = -272.5944444;
    cout << "conversie temperatura\n";
    cout << "valoare?\n";
    cin >> valoare;
    cout << "unitatea initiala\n";
    void afisareUnitatiTemperatura();
    afisareUnitatiTemperatura();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * gradeFahrenheit;
            break;
        case 2:
            aux = (float)valoare * gradeKelvin;
            break;
        case 3:
            aux = (float)valoare * gradeRankine;
            break;
        case 4:
            aux = valoare;
            break;
        default:
            break;
    }
    cout << "unitatea dorita\n";
    afisareUnitatiTemperatura();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / gradeFahrenheit;
            break;
        case 2:
            result = (float)aux / gradeKelvin;
            break;
        case 3:
            result = (float)aux /  gradeRankine;
            break;
        case 4:
            result = aux;
            break;
        default:
            break;
    }
    cout << "resultatul este: " << result << "\n";
}

void afisareUnitatiTemperatura() {
    cout << "1. gradeFahrenheit\n2. gradeKelvin\n3.  gradeRankine\n4. gradeCelsius\n";
}
