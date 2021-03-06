/*
Name: Ahmed Affaan
Title: for_loops.cpp
Folder: CPP/Free_Code_Camp
Date: 26/06/2022
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
    // Variable declared to store index and contents of an array.
    int index = 1;
    int nums[] = {1, 2, 5, 7, 3};

    /*
    // Prints out series of numbers 1-5 (WHILE Loop).
    while(index <= 5)
    {
        cout << index << endl;
        index++;
    }
    */

    /*
    // Prints out series of numbers 1-5 (FOR Loop).
    for(int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    */

    // Prints contents of an array.
    for(int i = 0; i <= 5; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}

// Program end.
