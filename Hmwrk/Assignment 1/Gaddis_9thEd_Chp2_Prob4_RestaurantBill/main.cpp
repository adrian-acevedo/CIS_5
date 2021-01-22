/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 9, 2021, 7:26 PM
 * Purpose: Restaurant Bill Problem
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
float mlCost, //Meal cost
      tax,   //Tax of Meal
      tip,   //Tip amount after total
      total, //Total amount after Tip added on
      addTax,//Tax of Meal Cost
      addTip;//Tip of Meal Cost

    //Initialize Variables
    mlCost=88.67;
    tax=0.0675;
    tip=0.2;

    //Map Inputs to Outputs -> Process
    addTax=(mlCost*tax);
    addTip=(mlCost*tip);
    total=mlCost+addTax+addTip;


    //Display Inputs/Outputs
    cout<<"Meal Cost  = $"<<mlCost<<endl;
    cout<<"Tax amount = $"<<addTax<<endl;
    cout<<"Tip amount = $"<<addTip<<endl;
    cout<<"Total bill = $"<<total<<endl;

    //Exit the Program - Cleanup
    return 0;
    }