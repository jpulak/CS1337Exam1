
// 2_26_struct2

/*
- Nested structure: A structure can have as member another structure
- Can pass a structure member or a whole structure as argument into a function
A structure variable is passed by value (Can also pass by reference with &)
- More efficient memory usage and faster execution to pass by reference
Use const to prevent the function from modifying the structure
- A function can return a structure
- A structure variable has an address. To hold that address, use a pointer to structure
- Everything we learned about pointers applies
- Can assign nullptr or a valid address from the & operator
- Dereference to access the structure (* operator)
- You can pass a structure pointer to a function:
1. Use * in parameter list of prototype and function header
2. Dereference the pointer inside the function (but see -> notation below as an alternative)
3. Pass the address of the structure using & when call the function
- To access a structure member from a pointer, there are 2 options
1. Dereference the pointer, then use the dot notation, but make sure you have the parens in the right place, e.g.  (*stuPtr).GPA
2. Use the arrow notation, e.g. stuPtr->GPA
- Can dynamically allocate a structure (or array of structures) with the “new” operator, need a pointer to store the address
- Should return the chunk of memory when done, with delete
Same concept and syntax as in chapter 9
*/

#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int bMonth;
    int bDay;
    int bYear;
};

struct Student
{
    Person studPerson; // Nested structure
    double GPA;
};

Student getStudentInfo();
void printStu(Student s);
void printStu2(const Student & s);
void printStu3(const Student * const sPtr);

int main()
{
    int numStudents;

    cout << "A structure can be nested within another structure\n";

    Student stu1;
    // Function returns a structure
    stu1 = getStudentInfo();

    // Pass structure by value to function
    cout << endl;
    printStu(stu1);

    // Pass structure by reference to function
    cout << endl;
    printStu2(stu1);

    // Address of a structure
    cout << "\nAddress of stu1 is " << &stu1;

    // Pointer to a structure
    Student * studPtr = &stu1;

    // Pass structure pointer to a function
    cout << "\nPrint stu1 using pointer\n";
    printStu3(studPtr);

    // Dynamic allocation of arrays of Students
    cout << "\nEnter # of students: ";
    cin >> numStudents;
    cin.ignore();
    studPtr = new Student[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
       *(studPtr + i) = getStudentInfo(); // Equivalent: studPtr[i] = getStudentInfo();
    }

    cout << "\nStudent array\n";
    for (int i = 0; i < numStudents; i++)
    {
       printStu(*(studPtr + i));
       cout << endl;
    }

    // Release memory
    delete [] studPtr;

    return 0;
}

Student getStudentInfo() // Returns a structure
{
    Student stud;
    cout << "Enter student's name: ";
    getline(cin, stud.studPerson.name);
    cout << "Enter month, day, year of birth: ";
    cin >> stud.studPerson.bMonth >> stud.studPerson.bDay
        >> stud.studPerson.bYear;
    cout << "Enter GPA: ";
    cin >> stud.GPA;
    cin.ignore();
    return stud;
}

void printStu(Student s) // Pass by value
{
    cout << "Name: " << s.studPerson.name << ", DOB " << s.studPerson.bMonth
         << "/" << s.studPerson.bDay << "/" << s.studPerson.bYear
         << ", GPA: " << s.GPA;
}

void printStu2(const Student & s) // Pass by reference
{
    cout << "Name: " << s.studPerson.name << ", DOB " << s.studPerson.bMonth
         << "/" << s.studPerson.bDay << "/" << s.studPerson.bYear
         << ", GPA: " << s.GPA;
}

void printStu3(const Student * const sPtr) // Pass a pointer to a structure
{
    cout << "Name: " << sPtr->studPerson.name << ", DOB "
         << sPtr->studPerson.bMonth
         << "/" << sPtr->studPerson.bDay << "/"
         << (*sPtr).studPerson.bYear
         << ", GPA: " << (*sPtr).GPA;
}
