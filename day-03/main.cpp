#include <iostream>
using namespace std;

int main()
{
    // declaration
    //  int age;
    //  cout<<"My age is : "<< age<<endl

    // variable definition
    int age = 18;
    cout << "My age is : " << age << endl;

    // manipulation or updation
    age = 101;

    // int
    int count = 5;

    // float
    float share = 3.14;

    // char
    char alphabet = 'z'; // char value must be withing single quote

    // double
    double weight = 44.69887;

    // boolean
    bool isMale = true; // also be written as bool isMale = 1;

    bool isFemale = false; // can also be written as bool isFemale = 0;

    cout << count << endl;    // prints 5
    cout << share << endl;    // prints 3.14
    cout << alphabet << endl; // prints z
    cout << weight << endl;   // prints 44.6989
    cout << isMale << endl;   // prints 1


    cout << "the size of int is : " << sizeof(count);
    return 0;
}