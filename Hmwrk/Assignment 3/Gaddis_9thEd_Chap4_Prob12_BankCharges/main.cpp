/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 19, 2021, 10:37 PM
 * Purpose:  Bank Charges Problem
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
    float begBala,  //Beginning Balance 
          numChec, //Number of checks written 
          checFee, //Check Fee 
          mnlyFee, //Monthly Fee
          lowBala, //Low Balance
          newBala; //New Balance
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>begBala>>numChec;
    checFee=2.40;
    mnlyFee=10;
    begBala<400?lowBala=15.00:lowBala=0.00;
    newBala=begBala-checFee-mnlyFee-lowBala;
   
    
    //Map inputs -> outputs
    if(numChec<0){
        cout<<"Number of checks are invaild!";
    }
    else if(numChec>0){
    }       
    if(begBala<0){
        cout<<"THE ACCOUNT IS OVERDRAWN!";
    }       
        else if(begBala>0){
    }       
            if(0<=numChec&&numChec<20)
             checFee=numChec*0.10f;
             
             else if(20<=numChec&&numChec<=39)
             checFee=numChec*0.08f;
             
             else if(40<=numChec&&numChec<=59)
             checFee=numChec*0.06f;
             
             else if(numChec<59)
             checFee=numChec*0.04f;
             
            mnlyFee=10;
            begBala<400?lowBala=15.00:lowBala=0.00;
            newBala=begBala-checFee-mnlyFee-lowBala;
             
            
            
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Balance     $ "<<setw(8)<<begBala<<endl;
    cout<<"Check Fee   $ "<<setw(8)<<checFee<<endl;
    cout<<"Monthly Fee $ "<<setw(8)<<mnlyFee<<endl;
    cout<<"Low Balance $ "<<setw(8)<<lowBala<<endl;
    cout<<"New Balance $ "<<setw(8)<<newBala;

    //Exit stage right or left!
    return 0;
} 