#include <iostream>

using namespace std;

int main()
{
    int size;   // tamanho da lista
    int op = 0; // número de operações

    cin >> size;
    
    int recipe[size];  // Receita da dança
    int aux[size];     // Array auxiliar
    int old_aux[size]; // Última modificação

    // Ler a receita
    for (int i = 0; i < size; i++)
    {
        cin >> recipe[i];
        old_aux[i] = i;
    }

    // Primeiro movimento
    for (int i = 0; i < size; i++)
    {
        aux[i] = old_aux[recipe[i]];
    }

    // Loop até que aux esteja ordenado
    while (true)
    {
        op++; // Conta as operações

        // Verifica se aux está ordenado
        bool sorted = true;
        for (int i = 0; i < size; i++)
        {
            if (aux[i] != i)
            {
                sorted = false;
                break;
            }
        }

        if (sorted) break; // Se estiver ordenado, sai do loop

        // Aplica a transformação novamente
        int temp[size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = aux[recipe[i]];
        }

        // Atualiza aux
        for (int i = 0; i < size; i++)
        {
            aux[i] = temp[i];
        }
    }

    cout << "Total de operacoes: " << op << endl;
    return 0;
}
