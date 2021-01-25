/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  parameter problem
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
    float num1,
          num2,
          num3,
          max2,
          max3;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cin>>num2;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>num3;
    cout<<endl;



if(num1>num2){
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<num1<<endl;
    cout<<endl;
}else if (num1<num2){
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<num2<<endl;
    cout<<endl;
    }

if(num1>num2&&num1>num3){
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<num1<<endl;
}else if(num2>num1&&num2>num3){
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<num2<<endl;
}else if(num3>num2&&num3>num1){
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<num3<<endl;
}
 //Exit stage right or left!
    return 0;
}
