#include <iostream>
using std::cout;

#include "Bat.h"

int main() {
    Animal animal("animal");
    Bat bat("bat");

    cout << "*** Query animal object" << '\n';
    cout << animal << "\n";
    animal.Eat();
    animal.Walk();
    animal.Fly();

    cout << "*** Query bat object" << '\n';
    cout << bat << "\n";
    bat.Eat();
    bat.Walk();
    bat.Fly();
    bat.EchoLocate();
    return 0;
}
