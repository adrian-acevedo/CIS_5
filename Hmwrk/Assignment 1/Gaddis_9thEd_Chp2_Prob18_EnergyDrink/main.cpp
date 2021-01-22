/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 8, 2021, 5:05 PM
 * Purpose: Energy Drink Problem
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
    unsigned short cstSurv, //Number of Customers Surveyed
                   purcEng, //Number of Customers Purchasing Energy
                   purcCit; //Number of Customers Purchasing Citrus
    float          prcEngy, //Percentage Surveyed consuming Energy Drink
                   prcCit;  //Percentage Citrus
           
                    
    //Initialize Variables
    cstSurv=16500;
    prcEngy=0.15f;
    prcCit=0.58f;
    
    //Map Inputs to Outputs -> Process
    purcEng=cstSurv*prcEngy;
    purcCit=purcEng*prcCit;
    
    //Display Inputs/Outputs
    cout<<"Total Customers Surveyed = "<<cstSurv<<endl;
    cout<<"Customers that are Energy Drinkers = "<<purcEng<<endl;
    cout<<"Customers that are Citrus Drinkers = "<<purcCit<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}