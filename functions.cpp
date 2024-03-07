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
//in a function prototype, you dont need the name of the params, but you should put them in anyways
int makeNumber(int userInput, int magicNumber = 42);

int main()
{
    int userNumber;
    int magicNumber; 
    cout << "Give me a number, and i will magify it \n";
    cin >> userNumber;
    cout << "Give me another number, and i will magify it \n";
    cin >> magicNumber;
    cout << "Your lucky number is " << makeNumber(userNumber, magicNumber) << "\n";
}

int makeNumber(int theNumber, int magicNumber)
{
    if (magicNumber == 0)
    {
        magicNumber = 42;
    }

    return theNumber * magicNumber;
}
