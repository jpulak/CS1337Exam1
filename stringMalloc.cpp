#include <iostream>

using namespace std;

/*
- With dynamic memory allocation, a program, during execution, asks for a chunk of memory large enough to
hold a variable (or an array) of a specific data type
- When the computer gives the program the starting address of the chunk of memory allocated
- Program needs a pointer to store that address
- Useful when you don't know how many variables will be needed when you write the program
- When no longer need the chunk of memory, should return it using delete
*/

int main()
{

    int numTests;

    cout << "Enter the number of tests: ";
    cin >> numTests;

    // Dynamically allocate an array of the right size
    double * testPtr = new double[numTests]; // Use [] for array

    // Use the array
    for (int i = 0; i < numTests; i++)
    {
        cout << "Enter the score: ";
        cin >> testPtr[i];
    }

    cout << "Test scores are: " << endl;
    for (int i = 0; i < numTests; i++)
        cout << testPtr[i] << endl;

    // Can also allocate a single variable
    int * intPtr = new int; // No [] for single variable

    // Release memory when no longer needed
    delete [] testPtr;
    testPtr = nullptr;
    delete intPtr;
    intPtr = nullptr;

    return 0;
}
