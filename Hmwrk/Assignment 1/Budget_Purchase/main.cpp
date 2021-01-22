/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 12, 2021, 7:21 PM
 * Purpose: Budget/Purchase 
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
    float milBdgt, //Military Budget =700
          fedBdgt, //Federal Budget = 4.1 Trillion 
          mlPrcnt;  
   
    
    //Initialize Variables
    milBdgt=7.0e11f; //Military Budget =700
    fedBdgt=4.1e12f;//Federal Budget = 4.1 Trillion
    
    //Map Inputs to Outputs -> Process
    mlPrcnt= (milBdgt / fedBdgt)*100; 
   
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);//learned from Thursday Video from Student
    cout<<"The Military Budget is "<<mlPrcnt<<"% of the Federal"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}