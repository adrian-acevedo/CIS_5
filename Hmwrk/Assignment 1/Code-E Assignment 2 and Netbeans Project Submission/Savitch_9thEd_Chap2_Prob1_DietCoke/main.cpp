/* 
 * File:   main.cpp
 * Author: Adrian Acevedo
 * Created on January 15, 2021, 11:56 PM
 * Purpose: Diet Coke Problem 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  //Formatting Library
#include <cstdlib> //Random Number Function 
#include <ctime>  //Time Library to set the random number seed
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVENGM=453.592;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time (0)));
    
    //Declare Variables
    float massMs=35,    //Mass of the Mouse 35grams 
          massKms=5,    //Mass to kill the Mouse of sweetner 
          mssCoke=350,  //Mass of 1 can of Coke
          cncnt8=0.001f,//Concentration of sweetner in can of Diet coke
          wDietr;       //Weight of Dieter 
    int nCans;        //Number of Cans of Diet coke         
    
    //Initialize or input i.e. set variable values
    wDietr=rand()%(350-90+1)+90;//Range from 90 to 350
    cin>>wDietr;
    
    //Map inputs -> output
    nCans=(massKms*wDietr*CNVENGM)/(massMs*mssCoke*cncnt8)
    ;
    
    //Display the outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<nCans<<" cans";

    //Exit stage right or left!
    return 0;
}