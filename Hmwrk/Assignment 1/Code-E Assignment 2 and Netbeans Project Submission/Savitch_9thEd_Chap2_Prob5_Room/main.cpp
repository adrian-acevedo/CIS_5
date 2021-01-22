/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 15, 2021, 10:56 PM
 * Purpose: Room Problem 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int mRc,     //Max Room Capacity 
        numPpl,  //Number of people allowed in meeting
        exceCap, //The room exceeds the max capacity 
        addCap;  //additional people 
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>> mRc >> numPpl;
    exceCap=numPpl-mRc;
    addCap=mRc-numPpl;
    
    
    //Determine the room max capacity
    if (numPpl > mRc)
        cout<<"Meeting cannot be held."<<endl<<"Reduce number of people by "<<exceCap<<" to avoid fire violation.";
    else if (numPpl <= mRc)
        cout<<"Meeting can be held."<<endl<<"Increase number of people by "<<addCap<<" will be allowed without violation.";
   
    //Exit stage right or left!
    return 0;
}