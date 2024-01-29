/*
Author: Yasmine El Houzaly
Course: CSCI-136
Instructor: Tong Yi
Assignment: Task A. Find the smaller of two integers.

// This program will make sure the the interger that the user input is btween 0 and 100 is it's not the program will keep asking until it is, and then the program will square the integer.
*/
/*
Task A. Input validation.

Write a program valid.cpp, which asks the user to input an integer in
the range 0 < n < 100. If the number is out of range, the program 
should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.

Example

$ ./valid
Please enter an integer: -10
Please re-enter: 1200
Please re-enter: 100
Please re-enter: 7

Number squared is 49
Hint: You can use a while or do ... while loop.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter an integer: ";
    cin>>n;
    while(n<1 || n>99)
    {
        cout<<"Please re-enter: ";
        cin>>n;
    }
    int s=pow(n,2);
     //square the interger
    cout<<"Number squared is "<<s; 




    return 0;
}
