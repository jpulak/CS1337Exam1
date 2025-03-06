#include <iostream>

/*
- A pointer can be an argument to a function
- With pointers, the function can modify the original data
works like a reference variable
(Under the hood, reference variables use
pointers)
Difference is that with ref variables, cannot assign an address
or do pointer arithmetic
- Use * in parameter list in prototype and header to indicate pointer
- Use * inside function for dereferencing
- Pass an address as an argument
*/
using namespace std;
void swapByRef(double  & db1, double & db2);
void swapByPtr(double * dbPtr1, double * dbPtr2);

int main()
{
    ///// All

    double d1 = 10.5, d2 = 5.6;
    cout << "d1 = " << d1 << ", d2 = " << d2 << endl;
    swapByRef(d1, d2);
    cout << "d1 = " << d1 << ", d2 = " << d2 << endl;
    swapByPtr(&d1, &d2);
    cout << "d1 = " << d1 << ", d2 = " << d2 << endl;
    return 0;
}

void swapByRef(double & db1, double & db2)
{
    double temp = db1;
    db1 = db2;
    db2 = temp;
}

void swapByPtr(double * dbPtr1, double * dbPtr2) // Swap using pointers
{
    double temp = *dbPtr1;
    *dbPtr1 = *dbPtr2; // * here means dereferencing
    *dbPtr2 = temp;
    dbPtr2 = dbPtr2 + 1; // This is not possible with ref variables
}


