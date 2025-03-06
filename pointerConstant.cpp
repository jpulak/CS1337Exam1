#include <iostream>

using namespace std;

/* Concept:
1 - Pointer to constant
- With a "pointer to constant", the compiler won't allow to modify the "pointed at" data. The pointer itself can be modified
- When pass a "pointer to constant" as parameter into a function, the compiler won't allow
the function to change the data pointed at. The pointer itself can be changed
- If original data is declared constant (rate array in example below), must use a pointer to constant
- If original data is not declared constant (rate2 array below), it's good practice use pointer to const if function is not supposed to modify rate2

2 - Constant pointer
- Constant pointer contains an address value that cannot be changed, but data can be changed
- MUST initialize the Pointer at definition

3 - Constant pointer to constant
- Constant pointer to constant: Both the pointer and data cannot be changed
- MUST initialize the Pointer at definition

Principle of least privilege: Give to a function the minimum rights and privileges
to do its job, but absolutely no more
*/

void printArray(const double *, int); // Pointer to constant

//////
void setToPI(double * const, int); // Constant pointer
void printArray2(const double * const, int); // Const pointer to constant


int main()
{
   const int SIZE = 4;
   const double rate[SIZE] = {20, 25, 30, 35}; // Program not allowed to modify rate
   double rate2[SIZE] = {100, 200, 300, 400}; // Program allowed to modify rate2

   /////
   printArray(rate, 4);
   cout << endl;
   printArray(rate2, 4);

   /////

   double val = 100;
   double * const intPtr = &val; // const pointer must be initialized at definition
   setToPI(intPtr, 1);
   cout << endl << "val = " << val << endl;

   setToPI(rate2, 4);
   printArray(rate2, 4);
   printArray2(rate2, 4);
   return 0;
}

void printArray(const double * dPtr, int size) // Pointer to constant, wonïŋ―t compile if remove const (pass const array when call printArray
{
   cout << endl;
   for (int count = 0; count < size; count++)
   {
      cout << *dPtr << endl;
      dPtr++;
   }
}

void setToPI(double * const dPtr, int size) // Constant pointer
{
   for (int i = 0; i < size; i++)
   {
      *(dPtr+i) = 3.1416;
   }
}


void printArray2(const double * const dPtr, int size) // Const pointer to constant
{
   cout << endl;
   cout << "From Array2: " << endl;
   for (int i = 0; i < size; i++)
   {
      cout << *(dPtr+i) << endl;
   }
}





