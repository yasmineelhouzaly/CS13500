/*
Author: Yasmine El Houzaly
Course: CSCI-136
Instructor: Tong Yi
Assignment: Task B. Find the smaller of three integers.
// This program will show use which the smallest number from the three numbers.

Task B. Find the smaller of three integers.


Write a program smaller3.cpp that asks the user to input three integer numbers, and prints out the smallest of the three.

(Hint: There are many possible solutions here. One possible strategy: Given numbers x, y, and z, you can first compare x and y, take whichever is smaller and compare it with z.)

Example

$ ./smaller3
Enter the first number: 23
Enter the second number: 76
Enter the third number: 37

The smaller of the three is 23
*/

// The program will print the smaller number from the two numbers

#include<iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Enter the third number: ";
    cin>>n3;
    if(n1<n2 && n1<n3)
    {
        cout<<"The smaller of the three is "<<n1;
    }
    else if(n2<n1 && n2<n3)
    {
        cout<<"The smaller of the three is "<<n2;
    }
    else(cout<<"The smaller of the three is "<<n3);






    return 0;

}
