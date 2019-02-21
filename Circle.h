#include <cstdlib>
#include "Figure.h"


class Circle : public Figure {
    double radius;
public:
    Circle(double);
    double calcArea();
    double calcPer();

    void setRadius(double);
    double getRadius();
    //void* operator new(size_t size);
};

class MemoryManager {
    size_t size;
    void* mem;
    public:
        MemoryManager(size_t size) {
            mem = allocMem(size);
            this->size = size;
        }
        ~MemoryManager() {
            freeMem(mem);
        }

        void* allocMem(size_t size) {
            return malloc(size);
        }
        void freeMem(void *ptr) {
            free(ptr);
        }
};
