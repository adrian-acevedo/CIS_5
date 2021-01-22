/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 15, 2021, 10:56 PM
 * Purpose: Sum Problem 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float x;//Variable to input 10 times
    float sumTot,sumNeg,sumPos;//Sums
    
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
     sumTot=sumNeg=sumPos=0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    cin>>x;
    sumPos+=(x>0)?x:0;
    sumNeg+=(x<0)?x:0;
    
    
    
    //Map inputs -> outputs
    sumTot=sumNeg+sumPos;
    
    
    //Display the outputs
    
    cout<<"Negative sum = "<<setw(3)<<sumNeg<<endl;
    cout<<"Positive sum = "<<setw(3)<<sumPos<<endl;
    cout<<"Total sum    = "<<setw(3)<<sumTot;

    //Exit stage right or left!
    return 0;
}