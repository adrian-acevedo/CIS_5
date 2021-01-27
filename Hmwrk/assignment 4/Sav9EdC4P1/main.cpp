/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Gallon problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVSLTG=0.264179;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float litGas,
          galGas,
          mpg;
    int   miles;
    char  choice;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do{
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>litGas;
        cout<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cout<<endl;
        cin>>miles;
        
        galGas=litGas*CNVSLTG;
        mpg=miles/galGas;
        
        cout<<"miles per gallon:"<<endl;
        cout<<fixed<<showpoint<<setprecision(2)<<mpg<<endl;
        
        cout<<"Again:"<<endl;
        cin>>choice;
        
        if(choice=='Y' || choice=='y')
        cout<<endl;
    }
    while(choice=='Y' || choice=='y');
    //Exit stage right or left!
    return 0;
}