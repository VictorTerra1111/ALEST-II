#ifndef HEAP_HPP
#define HEAP_HPP

#include "const.hpp"

class Heap{
    private:
        int v[TAM];
        int size;
      
        int parent(int i);
        int right(int i);
        int left(int i);

    public:
        Heap(int vsize, int vv[TAM]);

        void swim(int v[], int k);

        void put(int v[], int size, int data);
        
        void sink(int v[], int size, int k);
        
        int get(int v[], int size);
        
        void print(int v[], int size);
};

#endif