#ifndef OOP_VECTOR_H
#define OOP_VECTOR_H

#include <cstdlib>


template <class T> class Vector {
    T *arr;
    int capacity;
    int top;

    public:
        Vector(int);
        ~Vector();
        int getLastEl();
        void pushEl(int);
        T& operator[](int i);

};

template <class T>
Vector<T>::Vector(int capacity) {
    this->capacity = capacity;
    top = 0;
    arr = (int*) malloc(sizeof(int) * capacity);
}

template <class T>
Vector<T>::~Vector() {
    free(arr);
}

template <class T>
void Vector<T>::pushEl(int el) {
    if(top == capacity - 1)
        return;
    arr[top++] = el;
}

template <class T>
T& Vector<T>::operator [](int i) {
    return arr[i];
}





#endif
