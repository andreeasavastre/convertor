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
    // insert code here...
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
    int optiune = 0;
    cin >> optiune;
    switch (optiune) {
        case 1:
            lungime();
            break;
        case 2:
            arie();
            break;
        case 3:
            volum();
            break;
        case 4:
            timp();
            break;
        case 5:
            viteza();
            break;
        case 6:
            temperatura();
            break;
        case 7:
            masa();
            break;
        case 8:
            energie();
            break;
        case 9:
            presiune();
            break;
        case 10:
            densitate();
            break;
        case 11:
            consumCombustibil();
            break;
        default:
            break;
    }
    return 0;
}
