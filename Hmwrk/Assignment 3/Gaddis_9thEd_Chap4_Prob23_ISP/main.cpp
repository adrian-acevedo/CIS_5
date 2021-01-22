/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 19, 2021, 10:37 PM
 * Purpose:  ISP Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    char  package;
    float hrsUse,//hours use 
          hrsAcc,//hours access provided
          addHrs,//Additional hours
          monFee;//monthly Fee
          
    
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package>>hrsUse;
    
    
    //Map inputs -> outputs
        switch (package)
    {
        case 'A':
            {
                monFee=9.95f;
                hrsAcc=10;
                addHrs=2;
                break;
            }
        case 'B':
            {
                monFee=14.95f;
                hrsAcc=20;
                addHrs=1;
                break;
            }
        case 'C':
            {
                monFee=19.95f;
                hrsAcc=0;
                addHrs=0;
                break;
            }    
    }
        if (hrsUse>hrsAcc)
        monFee+=addHrs*(hrsUse-hrsAcc);
        
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Bill = $ "<<setw(5)<<monFee;
    
    

    //Exit stage right or left!
    return 0;
}