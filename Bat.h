//
// Created by Max Benson on 8/7/2021.
//

#ifndef BAT_H
#define BAT_H

#include "animal.h"

class Bat : public Animal {
public:
    Bat(const string& name)
        : Animal(name) {
    }
    // This is a method that the Animal class doesn't have
    void EchoLocate() const {
        cout << "   Bat::EchoLocate() [Bat-specific-method]: most animals can't , but I can echo locate!" << "\n";
    }
};


#endif //BAT_H
