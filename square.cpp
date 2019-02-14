#include "Square.h"


Square::Square(double side) {
    this->side = side;
}

double Square::calcArea() {
    return side * side;
}

double Square::calcPer() {
    return 4 * side;
}

void Square::setSide(double d) {
    side = d;
}

double Square::getSide() {
    return side;
}
