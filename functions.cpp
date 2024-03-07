 // functions.cpp
 // by norvy
 // this will help me better grasp functions in C++

 //The order of functions in C++ matters a lot, unlike in java
 //To use a function, it must be declared in the file, before it is called
 // You can do this using, for example. function prototypes, much like a abstract function in Java. (See poke proj :3)
 // So, for example, int makeNumber(int theNumber);
 // You can also just reorder, with funcs at top, main on bottom
 // But, people usually like to see main first


#include <iostream>
using namespace std;

const int MAGIC_NUMBER = 42;

//function that just adds shit lmao
int makeNumber(int);

int main()
{
    int userNumber;
    cout << "Give me a number, and i will magify it \n";
    cin >> userNumber;
    cout << "Your lucky number is " << makeNumber(userNumber) << "\n";
}

int makeNumber(int theNumber)
{
    return theNumber * MAGIC_NUMBER;
}
