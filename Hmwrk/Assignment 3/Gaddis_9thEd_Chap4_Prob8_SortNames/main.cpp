/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 19, 2021, 10:32 PM
 * Purpose:  Sort name problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Initialize the Random Number Seed
    
    //Declare Variables
    string name, name2, name3; //The three names 
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name>>name2>>name3;
    
    //Map inputs -> outputs
    if((name<name2)&&(name2<name3)){
        cout<<name<<endl<<name2<<endl<<name3<<endl;
    }
    if((name<name3)&&(name3<name2)){
       cout<<name<<endl<<name3<<endl<<name2<<endl;
    }
    if((name2<name)&&(name<name3)){
        cout<<name2<<endl<<name<<endl<<name3<<endl;
    }
    if((name2<name3)&&(name3<name)){
       cout<<name2<<endl<<name3<<endl<<name<<endl;
    }
    if((name3<name2)&&(name2<name)){
        cout<<name3<<endl<<name2<<endl<<name;
    }
    if((name3<name)&&(name<name2)){
        cout<<name3<<endl<<name<<endl<<name2;
    }
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}