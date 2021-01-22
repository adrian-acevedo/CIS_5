/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 15, 2021, 10:56 PM
 * Purpose: Paycheck
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
    float grosPay,  //Gross Pay 
          payRate,  //Pay rate in money and hours
          numHrs; //number of hours worked
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>numHrs;
    
    //Map inputs -> outputs
    if (numHrs<=40)
        grosPay=numHrs*payRate;
    else if (numHrs>=40)
        grosPay=(40*payRate)+(numHrs-40)*(2*payRate);
   
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2)<<"Paycheck = $"<<setw(7)<<grosPay;
    

    //Exit stage right or left!
    return 0;
}