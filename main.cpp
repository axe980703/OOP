#include <iostream>
#include <vector>
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

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i].getRadius() << ' ';

    try {
        Circle cr(-23);

    }
    catch (Circle::IllegalNumber err) {
        cout << "\nWrong value:" << err.value << endl;
    }

    Vector<Circle> vec1(5, Circle(3));
    Vector<Circle> vec2(7, Circle(1));
    //vec1 = vec2;

    for(int i = 0; i < vec1.size(); i++) cout << vec1[i].getRadius() << ' ';
    cout << endl;
    for(int i = 0; i < vec2.size(); i++) cout << vec2[i].getRadius() << ' ';
    cout << endl;

    Vector <Circle> v;




    return 0;
}
