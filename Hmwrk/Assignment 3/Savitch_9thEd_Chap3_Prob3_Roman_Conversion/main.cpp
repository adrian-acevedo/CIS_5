/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 19, 2021, 10:37 PM
 * Purpose:  Roman Conversion Problem
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
    int num;
    unsigned char n1,
                  n10,
                  n100,
                  n1000;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>num;
    n1=num%10;
    n10=(num/10)%10;
    n100=(num/100)%10;
    n1000=(num/1000)%10;

    //Map inputs -> outputs
    if(num>=1000&&num<=3000)
    {
        cout<<num<<" is equal to ";
    
         if(n1000==1)
            cout<<"M";
        else if(n1000==2)
            cout<<"MM";
        else if(1000==3)
            cout<<"MMM";
    
        if(n100==1)
            cout<<"C";
        else if(n100==2)
            cout<<"CC";
        else if(n100==3)
            cout<<"CCC";
        else if(n100==4)
            cout<<"CD";
        else if(n100==5)
            cout<<"D";
        else if(n100==6)
            cout<<"DC";
        else if(n100==7)
            cout<<"DCC";
        else if(n100==8)
            cout<<"DCCC";
        else if(n100==9)
            cout<<"CM";
            
         if(n10==1)
            cout<<"X";
        else if(n10==2)
            cout<<"XX";
        else if(n10==3) 
            cout<<"XXX";
        else if(n10==4)
            cout<<"XL";
        else if(n10==5)
            cout<<"L";
        else if(n10==6)
            cout<<"LX";
        else if(n10==7)
            cout<<"LXX";
        else if(n10==8)
            cout<<"LXX";
        else if(n10==9)
            cout<<"XC";   
        
        
        if(n1==1) 
            cout<<"I";
        else if(n1==2)
            cout<<"II";
        else if(n1==3)
            cout<<"III";
        else if(n1==4)
            cout<<"IV";
        else if(n1==5)
            cout<<"V";
        else if(n1==6)
            cout<<"VI";
        else if(n1==7)
            cout<<"VII";
        else if(n1==8)
            cout<<"VIII";
        else if(n1==9)
            cout<<"IX";
    
    }
    
    else if (num<1000||num>3000)
        cout<<num<<" is Out of Range!";
 
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}