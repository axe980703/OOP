#ifndef OOP_VECTOR_H
#define OOP_VECTOR_H

class Vector {
    int *arr;
    protected:
        int top;
        int capacity;
    public:
        Vector(int);
        ~Vector();
        int getLastEl();
        void pushEl(int);
};

#endif