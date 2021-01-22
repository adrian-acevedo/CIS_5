/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 8, 2021, 5:39 PM
 * Purpose: Personal Information
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
    string name, 
           address,
           city,
           state,
           zipCode,
           phonNum,
           major;
    
    //Initialize Variables
    name="John Doe";
    address="123 Street Ave,";
    city="Riverside,";
    state="CA,";
    zipCode="92555";
    phonNum="(951)768-0890";
    major="Computer Science";
            
    
    //Display Inputs/Outputs
    cout<<"Name ="<<name<<endl<<"Address ="<<address<<city<<state<<zipCode<<endl
            <<"Phone Number ="<<phonNum<<endl<<"Major ="<<major<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}