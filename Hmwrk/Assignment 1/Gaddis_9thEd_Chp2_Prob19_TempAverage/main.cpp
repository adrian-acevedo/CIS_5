/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 7, 2021, 4:05 PM
 * Purpose: Gaddis Average Temperature Problem 
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
    float tmpNY,  //New York Temperature in Fahrenheit
          tmpDen, //Denver Temperature
          tmpPhnx,//Phoenix Temperature
          avgTmp1, //Average Temperature before the increase
          avgTmp2, //Average Temperature after the increase
          perChng; //Percentage Temperature
    
    //Initialize Variables
    tmpNY=85;
    tmpDen=88;
    tmpPhnx=106;
    perChng=1+0.02f;
    
    //Map Inputs to Outputs -> Process
    avgTmp1=(tmpNY+tmpDen+tmpPhnx)/3;
    
    //Display Inputs/Outputs
    cout<<"Temperature before the increase"<<endl;
    cout<<"New York Temperature = "<<tmpNY<<"  Fahrenheit"<<endl;
    cout<<"Denver   Temperature = "<<tmpDen<<"  Fahrenheit"<<endl;
    cout<<"Phoenix  Temperature = "<<tmpPhnx<<" Fahrenheit"<<endl;
    cout<<"Average  Temperature = "<<avgTmp1<<"  Fahrenheit"<<endl;
    
    //Multiply by the percentage change
    tmpNY*=perChng;
    tmpDen*=perChng;
    tmpPhnx*=perChng;
    
    //Map Inputs to Outputs -> Process
    avgTmp2=(tmpNY+tmpDen+tmpPhnx)/3;
    
    //Display Inputs/Outputs
    cout<<"Temperature after the increase"<<endl;
    cout<<"New York Temperature = "<<tmpNY<<"   Fahrenheit"<<endl;
    cout<<"Denver   Temperature = "<<tmpDen<<"  Fahrenheit"<<endl;
    cout<<"Phoenix  Temperature = "<<tmpPhnx<<" Fahrenheit"<<endl;
    cout<<"Average  Temperature = "<<avgTmp2<<"  Fahrenheit"<<endl;
    
    //Display the Average Increase
    cout<<"Average Percent Temperature Increase = "
            <<(avgTmp2-avgTmp1)/avgTmp1*100<<"%"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}