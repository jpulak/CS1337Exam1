#include <iostream>

using namespace std;

/*
- The & (address) operator gives the address of a variable
- A pointer is a variable that holds an address
- Like all variables, a pointer has a name, a memory location and a type
- A pointer type is defined by the type of the variable it is pointing at
- Pointer types are pointer to an int (int *), pointer to a double (double *), etc.
- To access the value pointed at by a pointer, use the indirection operator to
dereference the pointer. Do not confuse the '*' of the indirection with the '*'
used to define a pointer
Besides an actual address, nullptr is a special value you can assign to a pointer
*/
int main()
{
    //////
    int num = 7;

    int * numPtr; // Define a pointer called numPtr, pointing to an int. Good practice is to end the name with ï¿½Ptrï¿½
    numPtr = &num;

    // Dereference the pointer with indirection operator
    cout << "Value pointed at by numPtr is " << *numPtr << endl;
    //////

    cout << "Address of num is " << &num << endl;
    cout << "Content of pointer is " << numPtr << endl;

    numPtr = nullptr;
    cout << "Content of pointer is " << numPtr << endl;

    return 0;
}

