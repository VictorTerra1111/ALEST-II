#include <iostream>
#include "Heap.hpp"
#include "const.hpp"

using namespace std;

Heap::Heap(int vsize, int vv[TAM]){
    size = vsize;

    for(int i = 1; i < TAM-1; ++i)
        v[i] = vv[i];
    
    v[1] = 0;
}

int Heap::parent(int i){
    return i / 2;
}
int Heap::right(int i){
    return 2 * i + 1;
}

int Heap::left(int i){
    return 2 * i;
}

void Heap::swim(int v[], int k)
{
    while (k > 1 && v[k / 2] < v[k])
    {
        cout << "Swap " << v[k] << " with " << v[k / 2] << endl;
        int tmp = v[k];
        v[k] = v[k / 2];
        v[k / 2] = tmp;
        k = k / 2;
    }
}

void Heap::put(int v[], int size, int data)
{
    v[size] = data;
    swim(v, size);
    (size)++;
}

void Heap::sink(int v[], int size, int k)
{
    while (2 * k <= size)
    {
        int j = 2 * k;

        if (j < size && v[j] < v[j + 1])
            j++;
        
        if (v[k] >= v[j])
            break;
        
        int tmp = v[k];
        v[k] = v[j];
        v[j] = tmp;
        k = j;
    }
}

int Heap::get(int v[], int size)
{
    int res = v[1];
    v[1] = v[--(size)];
    sink(v, size, 1);
    return res;
}

void Heap::print(int v[], int size)
{
    int i, j;
    int b = 1;
    int elem = 1;
    int sp = 32;

    for (j = 1; j < size; j++)
        printf("%d ", v[j]);
    printf("\n");

    while (1)
    {
        for (j = 0; j <= sp / 2; j++)
            printf(" ");
        for (i = b; i < b + elem; i++)
        {
            if (i == size)
            {
                printf("\n");
                return;
            }
            printf("\n");
            b = b + elem;
            elem = 2 * elem;
            sp = sp / 2;
        }
    }
}
