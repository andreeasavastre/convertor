//
//  main.cpp
//  Convertor
//
//  Created by dorneanu andreea on 03/01/17.
//  Copyright © 2017 dorneanu andreea. All rights reserved.
//

#include <iostream>
#include "UnitatiMasura.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Convertor unitati:\n";
    cout << "------------------\n";
    cout << "1. Lungime\n";
    cout << "2. Arie\n";
    
    int optiune = 0;
    cin >> optiune;
    switch (optiune) {
        case 1:
            lungime();
            break;
            
        default:
            break;
    }
    return 0;
}
