/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Rectangle
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
    unsigned number,
             j,
             i;
    char     letter;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a Number and a Variable!"<<endl;
    
    
    
    cin>>number;
    cin>>letter;
    
    //Map inputs -> outputs
    
    for(i=2; i<=number; i++)
    {
            for(j=1; j<=number; j++)
            cout<<letter;
            cout<<endl;
    }
    for(j=1; j<=number; j++)
        cout<<letter;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}