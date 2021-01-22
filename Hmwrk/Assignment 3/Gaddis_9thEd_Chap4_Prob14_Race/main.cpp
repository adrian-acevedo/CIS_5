/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 19, 2021, 10:37 PM
 * Purpose:  Race Problem
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
    string run1, run2, run3; //Runners name
    float time1,time2,time3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>run1>>time1>>run2>>time2>>run3>>time3;
    
    
    //Map inputs -> outputs
    if((time1<time2)&&(time2<time3)){
        cout<<run1<<"\t"<<setw(3)<<time1<<endl;
        cout<<run2<<"\t"<<setw(3)<<time2<<endl;
        cout<<run3<<"\t"<<setw(3)<<time3;
    }
    else if((time1<time3)&&(time3<time2)){
        cout<<run1<<"\t"<<setw(3)<<time1<<endl;
        cout<<run3<<"\t"<<setw(3)<<time3<<endl;
        cout<<run2<<"\t"<<setw(3)<<time2;
    }
    else if((time2<time1)&&(time1<time3)){
        cout<<run2<<"\t"<<setw(3)<<time2<<endl;
        cout<<run1<<"\t"<<setw(3)<<time1<<endl;
        cout<<run3<<"\t"<<setw(3)<<time3;
    }
    else if((time2<time3)&&(time3<time1)){
        cout<<run2<<"\t"<<setw(3)<<time2<<endl;
        cout<<run3<<"\t"<<setw(3)<<time3<<endl;
        cout<<run1<<"\t"<<setw(3)<<time1;
    }
    else if((time3<time2)&&(time2<time1)){
        cout<<run3<<"\t"<<setw(3)<<time3<<endl;
        cout<<run2<<"\t"<<setw(3)<<time2<<endl;
        cout<<run1<<"\t"<<setw(3)<<time1;
    }
    else if((time3<time1)&&(time1<time2)){
        cout<<run3<<"\t"<<setw(3)<<time3<<endl;
        cout<<run1<<"\t"<<setw(3)<<time1<<endl;
        cout<<run2<<"\t"<<setw(3)<<time2;
    }

    //Exit stage right or left!
    return 0;
}