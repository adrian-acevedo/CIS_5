/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Patterns
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
    int row;
    
    
    //Initialize or input i.e. set variable values
    cin>>row;
    
    //Map inputs -> outputs
    for(int i=1; i<=row; ++i){
        for(int j=1; j<=i; ++j){
            cout<<"+";
        }
        cout<<"\n\n";
    }
    for(int i=row; i>=2; --i){
        for(int j=1; j<=i;++j){
             cout<<"+";
        }
             cout<<"\n\n";
    }
   cout<<"+";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}