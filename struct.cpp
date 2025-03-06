#include <iostream>

using namespace std;

/*
- The data types we already know are primitive data types, meaning they come
with the C++ language. Attributes of a data type are the values it can take and the operations that can be performed
on it
For example, int values range from INT_MIN to INT_MAX, ints cannot have fractional part
Can perform +, *. /, %, etc.
- An abstract data type is a data type where the implementation is hidden, e.g. C++ string class
Programmer defines the acceptable values and the operations that can be performed on the type
Composed from primitive data types
- A structure is an abstract data type which is a grouping of several variables together into a
single item known as a structure. The variables do not have to be of the same type (unlike arrays)
- A structure definition is a template, no memory is allocated (has a tag)
- Once a structure has been defined, can declare variables of that structure type (memory is allocated)
- Use the dot operator to access a member of a structure
- To compare structures, must compare member by member
- Can use initialization list to initialize a structure variable when defined
- Partial initialization is possible
- Arrays of structures can be used instead of parallel arrays
*/


int main()
{

    // Define a structure called Student
    // No memory is allocated yet
    struct Student // structure tag, good practice to capitalize
    {
        string netID; //First structure member
        double GPA; // Second member
    }; // ends with semi-colon

    // Define a structure variable
    // Memory is allocated
    Student stu1;

    // Use of dot operator to access structure members
    cout << "\nEnter the student's netID, then GPA: ";
    cin >> stu1.netID >> stu1.GPA;

    cout << "stu1: Student's netID and GPA are ";
    cout << stu1.netID << ", " << stu1.GPA << endl;

    // Initialize structure with a list
    Student stu2 = {"def456", 100};
    cout << "\nInitialize structure with a list\n";
    cout << "stu2: Student's netID and GPA are ";
    cout << stu2.netID << ", " << stu2.GPA << endl;

    // Initialize member by member
    Student stu3;
    stu3.netID = "ghi789";
    stu3.GPA = 2.0;
    cout << "\nInitialize member by member\n";
    cout << "stu3: Student's netID and GPA are ";
    cout << stu3.netID << ", " << stu3.GPA << endl;

    // Partial initialization list
    Student stu4 = {"jkl7890"};
    cout << "\nInitialize with partial list\n";
    cout << "stu4: Student's netID and GPA are ";
    cout << stu4.netID << ", " << stu4.GPA << endl;

    // Array of structures
    const int NUM_ELMTS = 3;
    Student stuArr[NUM_ELMTS];

    cout << "\nArray of structures\n";
    for (int i = 0; i < NUM_ELMTS; i++)
    {
        cout << "\nEnter the netID and GPA of student " << (i+1) << " :";
        cin >> stuArr[i].netID >> stuArr[i].GPA;

        cout << "Student's netID and GPA are ";
        cout << stuArr[i].netID << ", " << stuArr[i].GPA << endl;

    }

    return 0;
}

