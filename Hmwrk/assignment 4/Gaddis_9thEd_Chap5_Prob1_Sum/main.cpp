/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Sum
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int sum=0,
        number;
   
    //Initialize or input i.e. set variable values
    cin>>number;
    
    //Map inputs -> output
    for(int i=1; i<=number; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum = "<<sum;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}