/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 19, 2021, 10:37 PM
 * Purpose:  Books
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
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int purBook,//The amount of Book purchased
        points; //Points awarded for purchasing books
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>purBook;
    
    //Map inputs -> outputs
    if(purBook<=0){
        points=0;
    }else if (purBook==1){
        points=5;
    }else if (purBook==2){
        points=15;
    }else if (purBook==3){
        points=30;
    }else if (purBook>=4){
        points=60;
    }
    
    //Display the outputs
    cout<<"Books purchased =  "<<purBook<<endl;
    cout<<"Points earned   = "<<points;
    

    //Exit stage right or left!
    return 0;
}