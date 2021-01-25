/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 24, 2021, 10:37 PM
 * Purpose:  Lab Hmwrk 4 menu
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVSLTG=0.264179;
//Function Prototypes

//Execution Begins Here!
float inflate (float prYrAgo, float prTdy){
       float     infl;
    infl=((prTdy-prYrAgo)/prYrAgo)*100;
     return infl;
}
    float predict (float prYrAgo, float infRate){
        infRate=infRate/100;
        prYrAgo=prYrAgo+(prYrAgo*infRate);
        return prYrAgo;
}
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis Sum Problem"<<endl;
    cout<<"Type 2 for Gaddis MinMAx Problem"<<endl;
    cout<<"Type 3 for Gaddis Rectangle Problem"<<endl;
    cout<<"Type 4 for Gaddis Pattern Problem"<<endl;
    cout<<"Type 5 for Gaddis Penny Problem"<<endl;
    cout<<"Type 6 for Savitch Mpg Problem"<<endl;
    cout<<"Type 7 for Savitch updated Mpg Problem"<<endl;
    cout<<"Type 8 for Savitch inflation Problem"<<endl;
    cout<<"Type 9 for Savitch updated inflation Problem"<<endl;
    cout<<"Type 10 for Savitch parameter Problem"<<endl;
    cin>>choice;
    
    if(choice=='1'){
        //Declare Variables
    unsigned short inpNum,      //inputted number
                   totSum=0;    // sum of all integers
                   
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    for (int count = 1; count <= inpNum; count++)
    {cin>>inpNum;
    totSum+=count;}
    
    //Display the outputs
    cout<<"Sum = "<<totSum;
    //Exit stage right or left!
    
    }else if(choice=='2'){
        //Declare Variables
    unsigned int numDays=0,     //number of days worked
                 penSal=1,      //salary in pennies
                 totPay=0;      //total pay after number of days worked
                 
    //Initialize or input i.e. set variable values
    cin>>numDays;
    //Map inputs -> outputs
    while (numDays<=0){
        cout<<"Input invalid."<<endl;
        cout<<"Enter a number greater than 0.";
        cin>>numDays;
    }
    
    for (int i=1; i<=numDays; i++){
    totPay+=penSal;
    penSal=penSal*2;
    }
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2)<<"Pay = $"<<totPay/100<<".";
    if ((totPay%100)<10){
        cout<<"0"<<totPay%100;
    }
    else if ((totPay%100)>=10){
        cout<<totPay%100;
    }
    //Exit stage right or left!
    
    }else if(choice=='3'){
        //Declare Variables
    int   inpNum,
          largNum,
          smalNum;
    const int      stopNum=-99;
    
    //Initialize or input i.e. set variable values
    cin>>inpNum;
    smalNum=largNum=inpNum;
    
    while(inpNum!=-99)
    {
        if (inpNum<smalNum)
        smalNum=inpNum;
        
        if (inpNum>largNum)
        largNum=inpNum;
      
        cin>>inpNum;
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<smalNum<<endl;
    cout<<"Largest  number in the series is "<<largNum;
    //Exit stage right or left!
    
    }else if(choice=='4'){
        unsigned int inpNum;        //number inputted by user 
    char         letter;
    //Initialize or input i.e. set variable values
    cin>>inpNum;
    cin>>letter;
    
    //Map inputs -> outputs
    for (int i=0; i<inpNum-1; i++)
	{
		for (int y=0; y<inpNum-1; y++)
		{
			cout<<letter;
		}
		cout<<letter<<endl;
	}
	for (int j=0;j<inpNum;j++)
	{
	    cout<<letter;
	}
       
    //Display the outputs
    
    }else if(choice=='5'){
        //Declare Variables
   int inpNum;
    //Initialize or input i.e. set variable values
    cin>>inpNum;

    //Map inputs -> outputs
    for (int i=1; i<=inpNum; i++)
	{
		for (int j=1; j<=i; j++)
		{
			cout<<"+";
		}
		cout<<endl<<endl;
	}
	for (int i=inpNum; i>=2; i--)
	{
	    for (int j=1; j<=i; j++)
	    {
	        cout<<"+";
	    }
	    cout<<endl<<endl;
	}
	cout<<"+";
	
    //Display the outputs
        
    }else if(choice=='6'){
        //Declare Variables
    float   gasLit,
            gasGal,
            mpg;
    int     miles;
    char    repeat;
    
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    
    //Display the outputs
    do{
    
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>gasLit;
    cout<<endl;
    cout<<"Enter number of miles traveled:"<<endl;
    cout<<endl;
    cin>>miles;
    
    gasGal=gasLit*CNVSLTG;
    mpg=miles/gasGal;
    
    cout<<"miles per gallon:"<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<mpg<<endl;
    
    cout<<"Again:"<<endl;
    cin>>repeat;
    
    if (repeat=='Y'||repeat=='y')
        cout<<endl;
    }
    while (repeat=='Y'||repeat=='y');
    
    
    //Exit stage right or left!
    
    }else if(choice=='7'){
        //Declare Variables
    float   gasLit1,
            gasLit2,
            gasGal1,
            gasGal2,
            mpg1,
            mpg2;
    int     miles1,
            miles2;
    char    repeat;
    
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    
    //Display the outputs
    
    do{
    cout<<"Car 1"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>gasLit1;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>miles1;
    
    gasGal1=gasLit1*CNVSLTG;
    mpg1=miles1/gasGal1;
    
    cout<<"miles per gallon: ";
    cout<<fixed<<showpoint<<setprecision(2)<<mpg1<<endl<<endl;
    
    
    
    cout<<"Car 2"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>gasLit2;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>miles2;
    
    gasGal2=gasLit2*CNVSLTG;
    mpg2=miles2/gasGal2;
    
    cout<<"miles per gallon: ";
    cout<<fixed<<showpoint<<setprecision(2)<<mpg2<<endl<<endl;
    
    if (mpg1>mpg2){
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
    else if (mpg1<mpg2){
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
    
    cout<<"Again:"<<endl;
    cin>>repeat;
    
    if (repeat=='Y'||repeat=='y')
        cout<<endl;
    }
    while (repeat=='Y'||repeat=='y');
    
    
    //Exit stage right or left!
    
    
    }else if(choice=='8'){
        //Declare Variables
    float    prYrAgo,       //price a year ago
             prTdy,         //price today
             infRate;       //inflation rate
    char     repeat;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {
    cout<<"Enter current price:"<<endl;
    cin>>prTdy;
    cout<<"Enter year-ago price:"<<endl;
    cin>>prYrAgo;
    
    cout<<fixed<<showpoint<<setprecision(2);
    infRate=((prTdy-prYrAgo)/prYrAgo)*100;
    
    cout<<"Inflation rate: "<<infRate<<"%"<<endl;
    cout<<endl;
  
    
    cout<<"Again:"<<endl;
    cin>>repeat;
    
    if (repeat=='Y'||repeat=='y')
        cout<<endl;
    }
    while (repeat=='Y'||repeat=='y');
    
    //Exit stage right or left!
    
    }else if(choice=='9'){
        //Declare Variables
    float    prYrAgo,       //price a year ago
             prTdy,         //price today
             infRate;       //inflation rate
    char     repeat;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {
    cout<<"Enter current price:"<<endl;
    cin>>prTdy;
    cout<<"Enter year-ago price:"<<endl;
    cin>>prYrAgo;
    
    cout<<fixed<<showpoint<<setprecision(2);
    infRate=((prTdy-prYrAgo)/prYrAgo)*100;
    
    cout<<"Inflation rate: "<<infRate<<"%"<<endl;
    cout<<endl;
    
    prYrAgo=prTdy;
    
    prYrAgo=predict(prYrAgo,infRate);
    cout<<"Price in one year: $"<<prYrAgo<<endl;
    
    prYrAgo=predict(prYrAgo,infRate);
    cout<<"Price in two year: $"<<prYrAgo<<endl;
    cout<<endl;
    
    cout<<"Again:"<<endl;
    cin>>repeat;
    
    if (repeat=='Y'||repeat=='y')
        cout<<endl;
    }
    while (repeat=='Y'||repeat=='y');
    
    //Exit stage right or left!
    
    }else if(choice=='10'){
        //Declare Variables
    float num1,num2,num3;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Enter first number:"<<endl<<endl;
    cin>>num1;
    cout<<"Enter Second number:"<<endl<<endl;
    cin>>num2;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>num3;
    
    //Display the outputs
    if (num1>num2){
        cout<<"Largest number from two parameter function:"<<endl<<num1<<endl<<endl;
    }
    else if (num1<num2){
        cout<<"Largest number from two parameter function:"<<endl<<num2<<endl<<endl;
    }
    
    if (num1>num2 && num1>num3){
        cout<<"Largest number from three parameter function:"<<endl<<num1<<endl;
    }
    else if (num2>num1 && num2>num3){
         cout<<"Largest number from three parameter function:"<<endl<<num2<<endl;
    }
    else if (num3>num1 && num3>num2){
         cout<<"Largest number from three parameter function:"<<endl<<num3<<endl;
    }
    //Exit stage right or left!
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}