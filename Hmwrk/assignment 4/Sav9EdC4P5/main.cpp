/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Inflation 2 problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float inflate (float prYr1,float prTdy){
    float   infl;
infl=((prTdy-prYr1)/prYr1)*100;
return infl;
}
float predict (float prYr1, float infRate){
    infRate=infRate/100;
    prYr1=prYr1+(prYr1*infRate);
    return prYr1;
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    float prYr1,
          prTdy,
          infRate;
    char  repeat;
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs

    //Display the outputs
do{
    cout<<"Enter current price:"<<endl;
    cin>>prTdy;
    cout<<"Enter year-ago price:"<<endl;
    cin>>prYr1;

    cout<<fixed<<showpoint<<setprecision(2);
    infRate=((prTdy-prYr1)/prYr1)*100;

    cout<<"Inflation rate: "<<infRate<<"%"<<endl;
    cout<<endl;

    prYr1=prTdy;

    prYr1=predict(prYr1,infRate);
    cout<<"Price in one year: $"<<prYr1<<endl;

    prYr1=predict(prYr1,infRate);
    cout<<"Price in two year: $"<<prYr1<<endl;
    cout<<endl;

    cout<<"Again:"<<endl;
    cin>>repeat;

    if(repeat=='Y'||repeat=='y')
        cout<<endl;
}
while (repeat=='Y'||repeat=='y');
    //Exit stage right or left!
    return 0;
}