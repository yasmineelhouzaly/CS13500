/*
Author: Yasmine El Houzaly
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab3 TaskA
Lab 3. File I/O and Data Processing

*/
/*
Task A

Write a program east-storage.cpp that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.

Example

$ ./east-storage
Enter date: 05/20/2018
East basin storage: 80.96 billion gallons
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;
int main ()
{
    
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) 
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk;        // new string variable
    getline(fin, junk); 

    string giving_Date;
    cout<<"Enter date MM/DD/YYYY: ";
    cin>>giving_Date;
    string date;
    double eastSt;
    while(fin >> date >> eastSt)
    {
        fin.ignore(INT_MAX, '\n');
        if(date==giving_Date)
        {
            cout<<"East basin storage: "<<eastSt<<"billion gallons"<<endl;
        }
    }
    fin.close();


    return 0;
}
