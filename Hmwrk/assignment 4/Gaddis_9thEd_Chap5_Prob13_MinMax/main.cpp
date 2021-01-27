/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Min and Max problem
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
    int         number,
                min,
                max;
    
    //Initialize or input i.e. set variable values
    cin>>number;
    min=max=number;
   //Map inputs -> outputs
    while(number!=-99){
        if(number < min)
            min = number;
        if(number > max)
            max = number;
        cin>>number;
    }
        
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;

    //Exit stage right or left!
    return 0;
}