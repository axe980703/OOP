#ifndef OOP_VECTOR_H
#define OOP_VECTOR_H

#include <cstdlib>

#define VEC_DEF_SIZE 64


class WrongArrayIndex {
public:
    int value;
    WrongArrayIndex(int i) : value(i) {}
};



template <class T> class Vector {
    T *arr;
    int capacity;
    int top;

    public:
        Vector();
        Vector(int);
        Vector(int, const T &obj);
        ~Vector();
        void pushEl(T);
        void operator = (const Vector&);
        T& operator [] (int);

        void operator delete(void* p);
        int size();


        private:
            void moreMemory();

};


template <class T>
Vector<T>::Vector(int capacity) {
    //memMan
    this->capacity = capacity;
    top = 0;
    arr = (T*) malloc(sizeof(T) * capacity);
}

template <class T>
Vector<T>::Vector(int size, const T &obj) {
    capacity = size;
    top = size;
    arr = (T*) malloc(sizeof(T) * size);
    for(int i = 0; i < size; i++)
        arr[i] = obj;
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
    if(i < 0) throw WrongArrayIndex(i);
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
