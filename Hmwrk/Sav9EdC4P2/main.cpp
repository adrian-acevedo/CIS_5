/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Gallon problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVNLTG=0.264179f;

//Function Prototypes

//Execution Begins Here!
float conver1(float litGas1, float galGas1, float mpg1, int mileDrv1);

float conver2(float litGas2, float galGas2, float mpg2, int mileDrv2);

int fuelEff(float mpg1,float mpg2);

int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float litGas1,
          litGas2,
          galGas1,
          galGas2,
          mpg1,
          mpg2;
    int   mileDrv1,
          mileDrv2;
    char  choice;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do{
    //car 1
    cout<<"Car 1"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>litGas1;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mileDrv1;
    
    //miles/gallon
    mpg1=conver1(litGas1,galGas1,mpg1,mileDrv1);
    
    cout<<"miles per gallon: ";
    cout<<fixed<<setprecision(2)<<mpg1<<endl;
    cout<<endl;
    
    //car mileDrv2
    cout<<"Car 2"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>litGas2;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mileDrv2;
    
     //miles/gallon
    mpg2=conver2(litGas2,galGas2,mpg2,mileDrv2);
    
    cout<<"miles per gallon: ";
    cout<<fixed<<setprecision(2)<<mpg2<<endl;
    cout<<endl;
    
    fuelEff(mpg1,mpg2);
    
    //repeat
    cout<<"Again:"<<endl;
    cin>>choice;
    if(choice=='y' || choice=='Y'){
        cout<<endl;
    }
    }while(choice=='y' || choice=='Y');

    //Exit stage right or left!
    return 0;
}
int fuelEff(float mpg1,float mpg2){
    if(mpg1>mpg2){
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
     if(mpg1<mpg2){
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
     }
}
float conver1(float litGas1, float galGas1, float mpg1, int mileDrv1){
        galGas1=litGas1*CNVNLTG;
        mpg1=mileDrv1/galGas1;
        
        return mpg1;
    }
float conver2(float litGas2, float galGas2, float mpg2, int mileDrv2){
        galGas2=litGas2*CNVNLTG;
        mpg2=mileDrv2/galGas2;
        
        return mpg2;
    }