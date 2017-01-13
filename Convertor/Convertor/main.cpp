//
//  main.cpp
//  Convertor
//
//  Created by dorneanu andreea on 03/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include <iostream>
#include "Lungime.hpp"
#include "Arie.hpp"
#include "Volum.hpp"
#include "Timp.hpp"
#include "Viteza.hpp"
#include "Temperatura.hpp"
#include "Masa.hpp"
#include "Energie.hpp"
#include "Presiune.hpp"
#include "Densitate.hpp"
#include "Consum combustibil.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    void meniuRomana();
    void meniuEngleza();
    // insert code here...
    int optiune = -1;
    int language = 0;
    cout << "0 - ROM\n1 - ENG\n";
    cin >> language;
    while(optiune != 0) {
        if (language == 0) {
            meniuRomana();
        } else {
            meniuEngleza();
        }
        cin >> optiune;
        switch (optiune) {
            case 1:
                lungime(language);
                break;
            case 2:
                arie(language);
                break;
            case 3:
                volum(language);
                break;
            case 4:
                timp(language);
                break;
            case 5:
                viteza(language);
                break;
            case 6:
                temperatura(language);
                break;
            case 7:
                masa(language);
                break;
            case 8:
                energie(language);
                break;
            case 9:
                presiune(language);
                break;
            case 10:
                densitate(language);
                break;
            case 11:
                consumCombustibil(language);
                break;
            default:
                break;
        }
    }
    return 0;
}

void meniuRomana() {
    cout << "Convertor unitati:\n";
    cout << "------------------\n";
    cout << "1. Lungime\n";
    cout << "2. Arie\n";
    cout << "3. Volum\n";
    cout << "4. Timp\n";
    cout << "5. Viteza\n";
    cout << "6. Temperatura\n";
    cout << "7. Masa\n";
    cout << "8. Energie\n";
    cout << "9. Presiune\n";
    cout << "10. Densitate\n";
    cout << "11. Consum combustibil\n";
    cout << "0. Iesire\n";
}

void meniuEngleza() {
    cout << "Convertor:\n";
    cout << "------------------\n";
    cout << "1. Length\n";
    cout << "2. Area\n";
    cout << "3. Volume\n";
    cout << "4. Time\n";
    cout << "5. Speed\n";
    cout << "6. Temperature\n";
    cout << "7. Mass\n";
    cout << "8. Energy\n";
    cout << "9. Pressure\n";
    cout << "10. Density\n";
    cout << "11. Fuel Economy\n";
    cout << "0. Exit\n";
}

