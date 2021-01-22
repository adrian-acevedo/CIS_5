/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 9, 2021, 5:56 PM
 * Purpose: Insurance Problem 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float replCos, // replacement call 
          miniamo; // minimum amount of insurance 
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>replCos;
    
    //Map inputs -> outputs
    miniamo=(replCos*0.8f);
    
    //Display the outputs
    cout<<"You need $"<<miniamo<<" of insurance.";

    //Exit stage right or left!
    return 0;
}