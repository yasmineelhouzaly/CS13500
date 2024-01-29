/*
Author: Yasmine El Houzaly
Course: CSCI-136
Instructor: Tong Yi
Assignment: Task C. Using arrays to store, update, and retrieve numbers.

// The program will have 10 number in an array and th euser can change things buy writing an the index and the value of it.
*/
/*
Task C. Using arrays to store, update, and retrieve numbers.

Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
The repetition of the steps 3-4-5 can be implemented with a do while loop:

// make array and fill it with 1
do {
    // print the array
    // get i and v from the user
    // if i is good, update the array at index i
} while (...); // if the index was good, repeat
The program should keep running until the user inputs an out-of-range (invalid) index.

Example:

$ ./edit-array

1 1 1 1 1 1 1 1 1 1

Input index: 8
Input value: 99

1 1 1 1 1 1 1 1 99 1

Input index: 0
Input value: 300

300 1 1 1 1 1 1 1 99 1

Input index: 10
Input value: 5

Index out of range. Exit.

Test your program. Check that all array elements are editable, for instance,
 use the program interface to make it print out sequence 5 10 15 20 25 30 35 40 45 50. Check that all possible edge cases are correctly handled, and the program exits when invalid index is input.
*/

#include<iostream>
using namespace std;
int main()
{
    int myData[]={1,1,1,1,1,1,1,1,1,1};
    for(int i=0; i<10; i++)
    {
        cout<<myData[i]<<" ";
    }
    int index, value;
    do {
        
        cout<<"\nInput index: ";
        cin>>index;
        cout<<"Input value: ";
        cin>>value;
        if( index>=0 && index<10  )
        {
            myData[index] = value;
            for(int i=0; i<10; i++)
            {
                cout<<myData[i]<<" ";
            }

        }
        }while(index>=0 && index<10);



 
    


    return 0;
}
