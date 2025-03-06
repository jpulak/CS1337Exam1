#include <iostream>
using namespace std;

struct value
{
    int x;
   int y;
};
void change(value v)
{
    v.x += 1;
    v.y -=1;
}
void changeReference(value &v)
{
    v.x += 1;
    v.y -=1;
}
void changePointer(value *v)
{
    v->x += 1;
    v->y -=1;
}

int main()
{
/*
    //slide 12
     value v1, *v2;
    v1.x = 25;
    v1.y = 30;
     v2 = &v1;
     cout << "Before change: ";
     cout << v1.x << " " << v1.y << endl;
     change(v1);
     cout << "After change passing by value: ";
     cout << v1.x << " " << v1.y << endl;

     cout << "After change passing by reference: ";
     changeReference(v1);
     cout << v1.x << " " << v1.y << endl;

     cout << "After change using pointers and reference: ";
     changePointer(v2);
     cout << v1.x << " " << v1.y << endl;

     cout << "After change accessing through pointer: ";
     cout << v2->x << " " << v2->y << endl;


/*/
     //slide 13
     int x, y, z;
     //non constant pointer to non constant data
    int *  ptr = &x;
    *ptr = 7;
    cout << "x through pointer is " << *ptr<< endl;
    cout << "x is " << x << endl;

  // *ptr++;                     //THis will increment the pointer
  // ptr++;                       //THis will increment the pointer
   (*ptr)++;              //This will increment the value
    cout << "x through pointer is " << *ptr<< endl;
    ptr = &y;
    y = 15;
    cout << "y through pointer is " << *ptr<< endl;

    z = 30;
    *ptr = z;
    cout << "The value of  *ptr, y and z is " << *ptr
    <<" " << y <<" "<< z << endl;
    *ptr = 50;
    cout << "The value of  *ptr, y and z is " << *ptr
    <<" " << y <<" "<< z << endl;

    //non constant pointer to constant data
    x = 20, y = 25;
    const int*p = &x;
    // the data pointed to by the pointer cannot be manipulated and will give an error
   // (*p)++;
    cout << "x through pointer is " << *p<< endl;
    // the pointer however can be reassigned to another variable.
     p = &y;
     cout << "y through pointer p is " << *p<< endl;

    //constant pointer to non constant data
	// data can be changed
    int * const p1 = &x;
    *p1 = 7;
    cout << "x through pointer p1 is " << *p1<< endl;
    cout << "x is " << x << endl;

    // the data can be changed
    *p1 = 11;
    cout << "x through pointer p1 is " << *p1<< endl;
    cout << "x is " << x << endl;

    // Pointer is constant and cannot be assign a new address
  //  ptr = &y;

        int array[4] = {1, 2, 3, 4};
        cout << "\narray solution: \n";
        int *const ptr1 = &array[0];
        cout << array[0] << endl;
        *ptr1=20;
        cout << array[0]<< endl;
        //*ptr1++=200;
        (*ptr1)++;
        cout << array[0];

}
