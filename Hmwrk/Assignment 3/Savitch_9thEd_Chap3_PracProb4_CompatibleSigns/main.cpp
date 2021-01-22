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
    string      sign1,
                sign2;
    int         entry1,  //element entry 1
                entry2;  //element entry 2
             
   
             
    
    //Initialize Variables
    
     
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    
    cin>>sign1;
    if(sign1=="Aries"){entry1=1;}
    if(sign1=="Leo"){entry1=1;}
    if(sign1=="Sagittarius"){entry1=1;}
    if(sign1=="Taurus"){entry1=2;}
    if(sign1=="Virgo"){entry1=2;}
    if(sign1=="Capricorn"){entry1=2;}
    if(sign1=="Gemini"){entry1=3;}
    if(sign1=="Libra"){entry1=3;}
    if(sign1=="Aquarius"){entry1=3;}
    if(sign1=="Cancer"){entry1=4;}   
    if(sign1=="Scorpio"){entry1=4;}    
    if(sign1=="Pisces"){entry1=4;}
    
    cin>>sign2;
    if(sign2=="Aries"){entry2=5;}
    if(sign2=="Leo"){entry2=5;}
    if(sign2=="Sagittarius"){entry2=5;}
    if(sign2=="Taurus"){entry2=6;}
    if(sign2=="Virgo"){entry2=6;}
    if(sign2=="Capricorn"){entry2=6;}
    if(sign2=="Gemini"){entry2=7;}
    if(sign2=="Libra"){entry2=7;}
    if(sign2=="Aquarius"){entry2=7;}
    if(sign2=="Cancer"){entry2=8;}   
    if(sign2=="Scorpio"){entry2=8;}    
    if(sign2=="Pisces"){entry2=8;}
     
    switch (entry1){
        case 1:
            if (entry2==5){
            cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
            }else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            }break;
        case 2:if (entry2==6){
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
            }else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            }break;
        case 3:if (entry2==7){
            cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
            }else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            }break;
        case 4:if (entry2==8){
            cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
            }else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            }break;
    }
      
    
    //Exit the Program - Cleanup
    return 0;
}