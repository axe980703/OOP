#ifndef OOP_FIGURE_H
#define OOP_FIGURE_H

class Figure {
    public:
        virtual double calcArea() = 0;
        virtual double calcPer() = 0;

        class IllegalNumber {
            public:
                double value;
                IllegalNumber(double v) : value(v) {}
        };

};

#endif

