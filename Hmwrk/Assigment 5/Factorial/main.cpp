/* 
 * File:   main.cpp
 * Author: adrian acevedo
 *Purpose: Factorial
 *
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>number;
    
    //Output data
    cout<<number<<"! = "<<fctrl(number);
    
    //Exit stage right!
    return 0;
}
int fctrl(int number){
    if(number==1||number==0)
    return 1;
    return number*fctrl(number-1);
}