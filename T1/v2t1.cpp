#include <iostream>

using namespace std;

/

int main()
{
    int size;   // size of the array
    int op = 0; // number of operations
    bool repeating = false; // flag for repetition of a value in the new array comparing to the old
   
    cin >> size;    
    
    int recipe[size];  // recipe for the dance
    int aux[size];     // array that is going to be changed
    int old_aux[size]; // array that is going to store the last modification

    for (int i = 0; i < size; i++)
    { // loop for filling the array and the recipe
        cin >> recipe[i];
        old_aux[i] = recipe[i];
    }

    for (int i = 0; i < size; i++)
    { // change based on the recipe
        aux[i] = old_aux[recipe[i]];
    }
    
    while (!repeating)
    {
        bool diff = false;
        // check if the array is repeating
        for (int i = 0; i < size; i++)
        {
            if (aux[i] != recipe[i])
            {
                diff = true;
                break;
            }
        }
        if (!diff)
        {
            repeating = true;
            break;
        }

        for (int i = 0; i < size; i++)
        { // change based on the recipe
            aux[i] = old_aux[recipe[i]];
        }
        op++; // count the operation
        
        for (int i = 0; i < size; i++)
        { // store the last modification in old_aux
            old_aux[i] = aux[i];
        }
    }

    cout << "op: " << op << endl;
    return 0;
}
