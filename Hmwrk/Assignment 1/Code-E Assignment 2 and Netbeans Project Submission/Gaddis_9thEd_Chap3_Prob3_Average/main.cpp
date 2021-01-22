/* 
 * File:   main.cpp
 * Author: Adrian Adrian
 *Created on January 15, 2021, 10:31 PM
 *Purpose: Average Problem 
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
    float var1,
          var2,
          var3,
          var4,
          var5,
          avg;
          
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin >> var1 >> var2 >> var3 >> var4 >> var5;
    
    //Map inputs -> outputs
    avg=(var1+var2+var3+var4+var5)/5;
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The average = "<<avg;
    

    //Exit stage right or left!
    return 0;
}