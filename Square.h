#include "Figure.h"

class Square : public Figure {
    double side;
    public:
        Square(double);
        double calcArea();
        double calcPer();

        void setSide(double);
        double getSide();
};