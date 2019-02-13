#include <cstdlib>
#include "Vector.h"

Vector::Vector(int capacity) {
    this->capacity = capacity;
    top = 0;
    arr = (int*) malloc(sizeof(int) * capacity);
}

Vector::~Vector() {
    free(arr);
}

void Vector::pushEl(int el) {
    if(top == capacity - 1)
        return;
    arr[top++] = el;
}

int Vector::getLastEl() {
    if(top == 0)
        return 0;
    return arr[top - 1];
}