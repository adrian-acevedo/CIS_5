/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Pennies
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
    int numDays=0,
        penSal=1,
        totPay=0;
    
    //Initialize or input i.e. set variable values
    cin>>numDays;
    
    //Map inputs -> outputs
    for(int i=1;i<=numDays;i++){
        totPay+=penSal;
        penSal*=2;
    }
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2)<<"Pay = $"<<totPay/100<<".";
    if((totPay%100)<10){
        cout<<"0"<<totPay%100;
    }
    else if((totPay%100)>=10){
        cout<<totPay%100;
    }
    //Exit stage right or left!
    return 0;
}