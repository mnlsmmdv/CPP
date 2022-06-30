/*
Name: Ahmed Affaan
Title: pointers.cpp
Folder: CPP/Free_Code_Camp
Date: 29/06/2022
Country: Republic of Maldives
Code version: -
Description: -
Credits to: Giraffe Academy
Credits to link: https://www.youtube.com/watch?v=vLnPwxZdW4Y
Note: Uncomment codes to execute and comment them when not in use.
*/

// Program start.

// Importing libraries.
#include <iostream>

using namespace std;

// Main function.
int main()
{
    
    int age = 19;
    double gpa = 2.7;
    string name = "Affaan";

    // Accessing memory addresses.
    cout << "Age: " << &age << endl; // age.
    cout << "GPA: " << &gpa << endl; // gpa.
    cout << "Name: " << &name << endl; // name.


    return 0;
}

// Program end.