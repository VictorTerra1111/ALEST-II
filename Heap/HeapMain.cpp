#include <iostream>
#include "Heap.hpp"
#include "const.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Inicializa gerador aleatorio
    srand(time(0));

    int v[MAX + 1]; // cria o vetor
    v[1] = 0;

    int size = TAM;
    Heap heapmax(size, v);
    
    for (int i = 1; i < TAM; i++)
        heapmax.put(v, size, rand() % 100);

    heapmax.print(v, size);

}