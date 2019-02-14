#ifndef OOP_VECTOR_H
#define OOP_VECTOR_H

#include <cstdlib>

const int VEC_DEF_SIZE = 64;


template <class T> class Vector {
    T *arr;
    int capacity;
    int top;

    public:
        Vector();
        Vector(int);
        ~Vector();
        void pushEl(T);
        void operator = (const Vector&);
        T& operator [] (int);
        int size();
    private:
        void moreMemory();

};

template <class T>
Vector<T>::Vector(int capacity) {
    this->capacity = capacity;
    top = 0;
    arr = (T*) malloc(sizeof(T) * capacity);
}

template <class T>
Vector<T>::Vector() {
    capacity = VEC_DEF_SIZE;
    top = 0;
    arr = (T*) malloc(sizeof(T) * capacity);
}

template <class T>
Vector<T>::~Vector() {
    free(arr);
}

template <class T>
void Vector<T>::pushEl(T el) {
    if(top == capacity)
        moreMemory();
    arr[top++] = el;
}

template <class T>
T& Vector<T>::operator [] (int i) {
    return arr[i];
}



template <class T>
void Vector<T>::operator = (const Vector &v2) {

}

template <class T>
int Vector<T>::size() {
    return top;
}

template <class T>
void Vector<T>::moreMemory() {
    capacity *= 2;
    T *tmpMem = (T*) malloc(sizeof(T) * capacity);
    for(int i = 0; i < capacity / 2; i++)
        tmpMem[i] = arr[i];
    free(arr);
    arr = tmpMem;
}


#endif