/* 
 * File:   main.cpp
 * Author: adrian acevedo
 *Purpose: Gaddis_9thEd_Chap6_Prob9_Present_Value
 *
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float psntVal(float,float,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float futVal,intRate;
    int years;
    
//output
cout<<"This is a Present Value Computation"<<endl;
cout<<"Input the Future Value in Dollars"<<endl;
cin>>futVal;
cout<<"Input the Number of Years"<<endl;
cin>>years;
cout<<"Input the Interest Rate %/yr"<<endl;
cin>>intRate;
cout<<fixed<<showpoint<<setprecision(2);
cout<<"The Present Value = $"<<psntVal(futVal,intRate,years);

return 0;
}
float psntVal(float futVal,float intRate,int years){
    intRate*=0.01f;
    return futVal/pow((1+intRate),years);
}