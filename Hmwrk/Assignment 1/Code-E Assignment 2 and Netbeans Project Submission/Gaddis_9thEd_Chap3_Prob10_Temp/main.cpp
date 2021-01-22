/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 9, 2021, 5:56 PM
 * Purpose: Temperature Problem 
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
    float f, //Fahrenheit temperature
          c; //Celsius temperature
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>f;
    
    //Map inputs -> outputs
    c=f-32;
    c=(c*5/9.0f);
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<f<<" Degrees Fahrenheit = "<<c<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}