/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 6, 2021, 11:29 AM
 * Purpose: Conversion From Acres to Mile^2 and Perimeter
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVAFT2=43560;    // Conversion  from Acres to Ft^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float areaAc;// Area in Acres
    float arFt2;//Area in Feet Squared
    float sideFt;//Perimeter side in Feet
    float preimtr;//Preimeter in Miles
    
    //Initialize Variables
    areaAc=640;
    
    //Map Inputs to Outputs -> Process
    arFt2=areaAc*CNVAFT2;
    sideFt=sqrt (arFt2);
    preimtr=4*sideFt;
    
    //Display Inputs/Outputs
    cout<<areaAc<<" acres = "<<arFt2<<" Feet^2"<<endl;
    cout<<"1 side of the Area = "<<sideFt<<" feet "<<endl;
    cout<<"The Perimeter = "<<preimtr<<" Feet"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}