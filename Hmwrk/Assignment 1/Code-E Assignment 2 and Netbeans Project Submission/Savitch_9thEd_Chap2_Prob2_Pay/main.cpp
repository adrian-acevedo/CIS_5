/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 15, 2021, 11:56 PM
 * Purpose: Pay Problem 
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
    float retroAc,//RetroActive increase for 6 months 
          naSalry,// New salary Paid per year
          nmSalry,//New salary Paid per month 
          prAnsal;//Previous salary per year
          
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>prAnsal;
    
    //Map inputs -> outputs
    naSalry=prAnsal+(prAnsal*0.076);
    nmSalry=naSalry/12;
    retroAc=(prAnsal*.076)/2;
    
    
    //Display the outputs
    cout<<fixed;
    cout<<"Retroactive pay    = $"<<setw(7)<<setprecision(2)<<retroAc<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<setprecision(2)<<naSalry<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<setprecision(2)<<nmSalry;

    //Exit stage right or left!
    return 0;
}