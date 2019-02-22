#include "Circle.h"

const double PI = 3.14;

//MemoryManager memMan(INIT_MEM);


Circle::Circle(double radius) {
    if(radius <= 0) throw IllegalNumber(radius);
    this->radius = radius;
}

Circle::Circle() = default;

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

ostream& operator<<(ostream& os, Circle& cr)
{
    os << "Circle | radius: " << cr.getRadius() << " | area: " << cr.calcArea() << " | perimeter: " << cr.calcPer() << endl;
    return os;
}


/*
void* Circle::operator new (size_t size) {
    return (int*) malloc(size * sizeof(int));

}*/