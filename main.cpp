#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Square.h"
#include "Vector.h"

using namespace std;

int main() {
    /*
    Circle cr1(1.21221);
    cout << "Circle:\n" << cr1.getRadius() << endl;
    cr1.setRadius(14.322);
    cout << cr1.getRadius() << endl << cr1.calcArea() << endl << cr1.calcPer() << endl;

    Square sq1 = Square(12.33);
    cout << "Square:\n" << sq1.getSide() << endl;
    sq1.setSide(9.2);
    cout << sq1.getSide() << endl << sq1.calcArea() << endl << sq1.calcPer() << endl;
    */


    Vector<Circle> v1(12, Circle(322));
    Vector<int> v2;


    for(int i = 0; i < v1.size(); i++)
        cout << v1[i].getRadius() << ' ';

    try {
        Circle cr(-5);

    }
    catch (Vector<Circle>::IllegalNumber ) {
        cout << "kek";
    }
    
    Circle c1(12);


    cout << endl <<  c1.getRadius();



    return 0;
}
