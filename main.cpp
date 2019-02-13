#include <iostream>
#include <stdio.h>
#include "Figure.h"
#include "Circle.h"
#include "Square.h"
#include "Vector.h"

using namespace std;

int main() {
    Circle cr1 = Circle(1.1212);
    cout << "Circle:\n" << cr1.getRadius() << endl;
    cr1.setRadius(14.322);
    cout << cr1.getRadius() << endl << cr1.calcArea() << endl << cr1.calcPer() << endl;

    Square sq1 = Square(12.33);
    cout << "Square:\n" << sq1.getSide() << endl;
    sq1.setSide(9.2);
    cout << sq1.getSide() << endl << sq1.calcArea() << endl << sq1.calcPer() << endl;

    Vector vc1 = Vector(5);
    for(int i = 0; i < 9; i++) {
        vc1.pushEl(i + 2);
        cout << vc1.getLastEl() << ' ';
    }



    return 0;
}