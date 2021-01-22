/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 9, 2021, 5:56 PM
 * Purpose: Trig Problem 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  
#include <cmath>    
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float Value=3.141592;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int   angle;
    float radAng,
          angSin,
          angCos,
          angTan;
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    //Map inputs -> outputs
    
    radAng=angle*(Value/180); // convert degree to radians 
    angSin=sin(radAng);
    angCos=cos(radAng);
    angTan=tan(radAng);
    
    
    //Display the outputs
    cout<<fixed;
    cout<<setprecision(0)<<"sin("<<angle<<") = "<<setprecision(4)<<angSin<<endl;
    cout<<setprecision(0)<<"cos("<<angle<<") = "<<setprecision(4)<<angCos<<endl;
    cout<<setprecision(0)<<"tan("<<angle<<") = "<<setprecision(4)<<angTan;

    //Exit stage right or left!
    return 0;
    
}