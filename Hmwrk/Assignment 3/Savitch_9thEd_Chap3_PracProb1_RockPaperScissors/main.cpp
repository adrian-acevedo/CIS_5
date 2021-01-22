/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 19, 2021, 10:37 PM
 * Purpose:  Rock Paper Scissors Problem
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
    char inp1,inp2;
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>inp1>>inp2;
    
    //Map inputs -> outputs
    if(inp1==inp2){
        cout<<"Nobody wins.";
    
    }    else if ((inp1=='p'||inp1=='P')&&(inp2=='r'||inp2=='R')){
                    cout<<"Paper covers rock.";
        
    }    else if ((inp1=='r'||inp1=='R')&&(inp2=='p'||inp2=='P')){
                    cout<<"Paper covers rock.";

    }    else if ((inp1=='p'||inp1=='P')&&(inp2=='s'||inp2=='S')){
                    cout<<"Scissors cuts paper.";
    
    }    else if ((inp1=='s'||inp1=='S')&&(inp2=='p'||inp2=='P')){
                    cout<<"Scissors cuts paper.";

    }    else if ((inp1=='s'||inp1=='S')&&(inp2=='r'||inp2=='R')){
                    cout<<"Rock breaks scissors.";
    
    }    else if ((inp1=='r'||inp1=='R')&&(inp2=='s'||inp2=='S')){
                    cout<<"Rock breaks scissors.";
    }
   
   //Display the outputs

    //Exit stage right or left!
    return 0;
}