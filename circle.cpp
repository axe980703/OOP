#include "Circle.h"

const double PI = 3.14;

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::calcArea() {
    return PI * radius * radius;
}

double Circle::calcPer() {
    return PI * 2 * radius;
}

void Circle::setRadius(double d) {
    radius = d;
}

double Circle::getRadius() {
    return radius;
}