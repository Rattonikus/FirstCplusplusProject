// first.cpp
// Here I will put the name of my file as the first comment
// This helps c++ as it doesnt force you to name your files the way java does. 
// Its standart to include information at the top of the file. This is hello world :3
// By Norvy


// In order to write something, we have to access a library
// Is this similar to an import in java?
// This is copying a file. 
#include <iostream>
using namespace std; // std = standart :skull:

// Like in java, this is our main, but c++ doesnt know how many args are in this array
// So we just kinda tell it. This could also just be empty parens
int main(int argc, char *argv[])
{
    cout << "Hello, world\n";
    // C Out, then the insertion operator "<<", this lets us write to the stream
    // Just one of many ways to do outputs

    int age; 
    cout << "What is your age ";
    cin >> age; 
    cout << "Your age is " << age << endl; 
}

// Standard input stream is cin, like System.in
// And standard outpput stream is cout, like System.out!
// The insertion operator << is writing to an output stream
// Whatever gets passed to it is written
// Likewise, the extraction operator is >>, which writes to! 
// '\n' vs endl - Endl forces a flush of the output buffer, \n does not. 
// Endl can help with debugging, since its forced to the file its writing to (output buffer), while 
// \n will simply fill the buffer, and not flush it until the program is closed, or when its told 





