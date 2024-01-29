/*
Author: Yasmine El Houzaly
Course: CSCI-136
Instructor: Tong Yi
Assignment: Task A. Find the smaller of two integers.

// The program will print the smaller number from the two numbers
*/
/*
Task A. Find the smaller of two integers.


Write a program smaller.cpp that asks the user to
input two integer numbers and prints out the smaller of the two.

Example

$ ./smaller
Enter the first number: 15
Enter the second number: -24

The smaller of the two is -24
*/
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout<<"Please enter the first number: ";
    cin>>n1;
    cout<<"Please enter the first number: ";
    cin>>n2;
    if(n1>n2)
    {
        cout<<"The smaller number is "<<n2;
    }
    else (    cout<<"The smaller number is "<<n1);
    



    return 0;
}
