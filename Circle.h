#include <cstdlib>
#include "Figure.h"

#define INIT_MEM 1024

class Circle : public Figure {
    double radius;
    public:
        Circle(double);
        double calcArea();
        double calcPer();

        void setRadius(double);
        double getRadius();
        void* operator new(size_t size);


    class MemoryManager {
        size_t size;
    public:
        MemoryManager(size_t sz): size(sz) {
            allocMem(INIT_MEM);
        }
        ~MemoryManager() {

        }

        void* allocMem(size_t sz);
        void freeMem(void *ptr);
    };
};

