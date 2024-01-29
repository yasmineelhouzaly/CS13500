/*
Author: Yasmine El Houzaly
Course: CSCI-136
Instructor: Tong Yi
Assignment: Task C. A leap year or a common year?


// The program will tell us if the year entered is leap year or a common year.

Task C. A leap year or a common year?

Introducing the modulo operator %

In C++, operator % computes the remainder of the division of x by y. For example, 
37 % 10 returns 7, because this is the remainder of 37 when divided by 10.

The task

Write a program leap.cpp that asks the user to input an integer representing 
a year number (1999, 2016, etc.). If the input year is a leap year according 
to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.

In the modern Gregorian calendar, a year is a leap year if it is divisible by 4, 
but century years are not leap years unless they are divisible by 400. Here is the pseudocode:

if (year is not divisible by 4) then (it is a common year) 
else if (year is not divisible by 100) then (it is a leap year) 
else if (year is not divisible by 400) then (it is a common year) 
else (it is a leap year)

This means that 2012, 2016, 2020, and 2040 are all leap years.
However, the century years 1800, 1900, 2100, 2200, 2300 and 2500 are NOT.
Yet, 2000, 2400, 2800 are still leap years.

Example 1

$ ./leap
Enter year: 2016

Leap year
Example 2

$ ./leap
Enter year: 2017

Common year



*/

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Please enter any year: ";
    cin>>year;

    if(year%4!=0)
    {
        cout<<"common year";

    }
    else if(year%100!=0)
    {
        cout<<"leap year";
    }
    else if(year%400!=0)
    {
        cout<<"common year";
    }
    else (cout<<"leap year");

    
    
    
    return 0;
}
