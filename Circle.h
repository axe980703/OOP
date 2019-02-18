#include "Figure.h"

class Circle : public Figure {
    double radius;
    public:
        Circle(double);
        double calcArea();
        double calcPer();

        void setRadius(double);
        double getRadius();

        class IllegalNumber{
            public:
            double value;
            IllegalNumber(double v) : value(v) {}
        };
};

