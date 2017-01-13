//
//  Densitate.cpp
//  Convertor
//
//  Created by dorneanu andreea on 06/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include "Densitate.hpp"
#include <iostream>
using namespace std;

void densitate(int language) {
    float valoare = 0;
    float aux = 0;
    float result = 0;
    int primaUnitate = 0;
    int resultatUnitate = 0;
    
    // constante unitati masura (unitate de baza kg/cmc)
    const float gpercmc = 0.001;
    const float gperl = 0.000001;
    const float kgperl = 0.001;
    const float kgpermc = 0.000001;
    const float lbperftc = 0.00001601794009290405;
    const float lbperin = 0.02767989858;
    const float lbpergal = 0.0001198264273;
    const float mgpercmc = 0.000001;
     const float ozpergal = 0.000007489150094;
     const float ozperftc = 0.000001001153961;
     const float tpermc = 0.001;
    if (language == 0){
        cout << "conversie densitate\n";
        cout << "valoare?\n";
    }
    else {
        cout << "density conversion\n";
        cout << "value?\n";
    }
    cin >> valoare;
    if (language == 0){
        cout << "unitatea initiala\n";
    }
    else{
        cout << "initial unit\n";
    }
    void afisareUnitatiDensitate();
    afisareUnitatiDensitate();
    cin >> primaUnitate;
    switch (primaUnitate) {
        case 1:
            aux = (float)valoare * gpercmc;
            break;
        case 2:
            aux = (float)valoare * gperl;
            break;
        case 3:
            aux = (float)valoare * kgperl;
            break;
        case 4:
            aux = (float)valoare * kgpermc;
            break;
        case 5:
            aux = (float)valoare * lbperftc;
            break;
        case 6:
            aux = (float)valoare * lbperin;
            break;
        case 7:
            aux = (float)valoare * lbpergal;
            break;
        case 8:
            aux = (float)valoare * mgpercmc;
            break;
        case 9:
            aux = (float)valoare * ozpergal;
            break;
     case 10:
     aux = (float)valoare * ozperftc;
     break;
     case 11:
     aux = (float)valoare * tpermc;
     break;
     case 12:
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
    afisareUnitatiDensitate();
    cin >> resultatUnitate;
    switch (resultatUnitate) {
        case 1:
            result = (float)aux / gpercmc;
            break;
        case 2:
            result = (float)aux / gperl;
            break;
        case 3:
            result = (float)aux / kgperl;
            break;
        case 4:
            result = (float)aux / kgpermc;
            break;
        case 5:
            result = (float)aux / lbperftc;
            break;
        case 6:
            result = (float)aux / lbperin;
            break;
        case 7:
            result = (float)aux / lbpergal;
            break;
        case 8:
            result = (float)aux / mgpercmc;
            break;
        case 9:
            result = (float)aux / ozpergal;
            break;
     case 10:
     result = (float)aux / ozperftc;
     break;
     case 11:
     result = (float)aux / tpermc;
     break;
     case 12:
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

void afisareUnitatiDensitate() {
    cout << "1. g/cmc\n2. g/l\n3. kg/l\n4. kg/mc\n5. lb/ft\n6. lb/in\n7. lb/gal\n8. mg/cmc\n9. oz/gal\n10. oz/ft\n11. t/mc\n12. kg/cmc\n";
}
