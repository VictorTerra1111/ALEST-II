#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size;   // size of the array
    int op = 0; // number of operations
    int enter;
    bool repeating = false;
    cin >> size;
    cout << "the line has " << size << " robots" << endl;
    
    int recipe[size];  // recipe for the dance
    int aux[size];     // array that is going to be changed
    int old_aux[size]; // array that is going to store the last modification

    cout << "tell me the recipe: ";

    for (int i = 0; i < size; i++)
    { // loop for filling the array and the recipe
        cin >> recipe[i];
        old_aux[i] = recipe[i];
    }

    cout << "the recipe is: ";
    for (int i = 0; i < size; i++)
    { 
        cout << recipe[i];
    }
    cout << "ok?" << endl;
    for (int i = 0; i < size; i++)
    { // change based on the recipe
        aux[i] = old_aux[recipe[i]];
    }
    
    while (!repeating)
    {
    
        cout << "new array: ";
        for (int i = 0; i < size; i++)
        { 
            cout << aux[i];
        }
        cout << endl;

        bool diff = false;
        // check if the array is repeating
        for (int i = 0; i < size; i++)
        {
            if (aux[i] != recipe[i])
            {
                cout << "there is someone different from the recipe" << endl;
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
        cout << "operations was added" << op << endl;
        
        for (int i = 0; i < size; i++)
        { // store the last modification in old_aux
            old_aux[i] = aux[i];
        }
    }
    cout << endl << endl << "op: " << op << endl;
    return 0;
}
