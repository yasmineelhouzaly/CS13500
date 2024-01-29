/*
Author: Yasmine El Houzaly
Course: CSCI-136
Instructor: Tong Yi
Assignment: Task D. Number of days in a given month
//This program show how many days in different months considering leap years



Task D. Number of days in a given month

Write a program month.cpp that asks the user to input the 
year and the month (1-12) and prints the number of days in that month 
(taking into account leap years). You may not use switch case or arrays 
even if you know these language constructs.

Example

$ ./month
Enter year: 2017
Enter month: 5

31 days
*/
#include<iostream>
using namespace std;


int main()
{
    int year;
    cout<<"Please enter any year: ";
    cin>>year;
    int month;
    cout<<"Please enter any month from 1 to 12: ";
    cin>>month;

    if(month==2)
    {
        if(year%4!=0)
        {
        cout<<"28 days";
        }
        else if(year%100!=0)
        {
        cout<<"29 days";
        }
        else if(year%400!=0)
        {
        cout<<"28 days"; 
        }
        else (cout<<"29 days");
    }
    
    else if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        cout<<"31 says";
    }
    else if (month==4||month==6||month==9||month==11)
    {
        cout<<"30 says";
    }

    
    
    
   
   
    
    
    
    return 0;
}
