#include <iostream>
#include <stdio.h>
#include "Figure.h"
#include "Circle.h"
#include "Square.h"
#include "Vector.h"

using namespace std;

int main() {
    /*
    Circle cr1 = Circle(1.1212);
    cout << "Circle:\n" << cr1.getRadius() << endl;
    cr1.setRadius(14.322);
    cout << cr1.getRadius() << endl << cr1.calcArea() << endl << cr1.calcPer() << endl;

    Square sq1 = Square(12.33);
    cout << "Square:\n" << sq1.getSide() << endl;
    sq1.setSide(9.2);
    cout << sq1.getSide() << endl << sq1.calcArea() << endl << sq1.calcPer() << endl;
    */
    Vector<int> v1;
    v1.pushEl(12);
    v1.pushEl(32);
    v1.pushEl(99);
    v1[1] = 4;
    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << ' ';


    return 0;
}