/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 15, 2021, 10:56 PM
 * Purpose: Cookie Problem
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
    int calors, // calories of cookies
        cookies,//cookies
        calCons; //calories consumed
    
    //Initialize or input i.e. set variable values
    calors=300/4;
    cin>>cookies;
    calCons=(calors*cookies);
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed "<<calCons<<" calories.";

    //Exit stage right or left!
    return 0;
}