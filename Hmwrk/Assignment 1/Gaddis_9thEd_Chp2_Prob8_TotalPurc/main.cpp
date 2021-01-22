/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 10, 2021, 6:16 PM
 * Purpose: Total Purchase Problem
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
    float prcitm1, //Price of item 1
          prcitm2, //Price of item 2
          prcitm3, //Price of item 3
          prcitm4, //Price of item 4
          prcitm5, //Price of item 5
          salsTax, //Sales Tax
          subTot,  //Sub Total
          total;   //Total Amount
    
    
    //Initialize Variables
    prcitm1=15.95;
    prcitm2=24.95;
    prcitm3=6.95;
    prcitm4=12.95;
    prcitm5=3.95;
    
    
    //Map Inputs to Outputs -> Process
    subTot=prcitm1+prcitm2+prcitm3+prcitm4+prcitm5;
    salsTax=0.07*subTot;
    total=salsTax+subTot;       
    
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    
    cout<<"Item 1 = $"<<prcitm1<<endl;
    cout<<"Item 2 = $"<<prcitm2<<endl;
    cout<<"Item 3 = $"<<prcitm3<<endl;
    cout<<"Item 4 = $"<<prcitm4<<endl;
    cout<<"Item 5 = $"<<prcitm5<<endl;
    cout<<"Subtotal = $"<<subTot<<endl;
    cout<<"Sales Tax = $"<<salsTax<<endl;
    cout<<"Total = $"<<total<<endl;
    
    
    
    //Exit the Program - Cleanup
    return 0;
}