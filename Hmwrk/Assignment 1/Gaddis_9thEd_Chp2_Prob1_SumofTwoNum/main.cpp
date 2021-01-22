/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 9, 2021, 5:56 PM
 * Purpose:  Sum Of Two Numbers
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int var1, // Variable 1 is 50 
        var2,// Variable 2 is 100
        total;  // Sum of Variable 1 and 2
    
    //Initialize Variables
    var1=50;
    var2=100;
    
    //Map Inputs to Outputs -> Process
    total=var1+var2;
    
    //Display Inputs/Outputs
    cout<<" Variable 1 is = "<<var1<<endl;
    cout<<" Variable 2 is = "<<var2<<endl;
    cout<<" Total is      = "<<total<<endl;
    //Exit the Program - Cleanup
    return 0;
}