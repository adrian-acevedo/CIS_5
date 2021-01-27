/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>
#include <cmath>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);             //prob 1
int fctrl(int);                                 //prob 2
bool isPrime(int);                              //prob 3
int collatz(int);                               //prob 4 
int ocollatz(int);                              //prob 5
void timeInput(int &,int &,char &,bool &);      //prob 7
void conversion(int &,int &,char &);            //prob 7
void output(int &,int &,int &,char &);          //prob 7
float psntVal(float,float,int);                 //prob 8
void getScre(int &,int &,int &,int &,int &);    //prob 9
float calcAvg(int,int,int,int,int);             //prob 9
int fndLwst(int,int,int,int,int);               //prob 9

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Min Max Problem"<<endl;
    cout<<"Type 2 for Factorial Problem"<<endl;
    cout<<"Type 3 for Is Prime Problem"<<endl;
    cout<<"Type 4 for Collatz Sequence Problem"<<endl;
    cout<<"Type 5 for Collatz Sequence with Output Problem"<<endl;
    cout<<"Type 6 for Sav9EdC5P12 Problem"<<endl;
    cout<<"Type 7 for Time Converter Problem"<<endl;
    cout<<"Type 8 for Present Value Problem"<<endl;
    cout<<"Type 9 for Is Prime Problem"<<endl;
    cin>>choice;
    
    if(choice=='1'){
            //Declare Variables
        int num1,num2,num3,min,max;
        //Initialize Variables

        //Process/Map inputs to outputs
        cout<<"Input 3 numbers"<<endl;
        cin>>num1>>num2>>num3;
        min=max=num1;

        minmax(num1,num2,num3,min,max);

        //Output data
        cout<<"Min = "<<min<<endl;
        cout<<"Max = "<<max;
        
    }else if(choice=='2'){
        //Declare Variables
        int number;
        //Initialize Variables

        //Process/Map inputs to outputs
        cout<<"This program calculates the factorial using a function ";
        cout<<"prototype found in the template for this problem."<<endl;
        cout<<"Input the number for the function."<<endl;
        cin>>number;

        //Output data
        cout<<number<<"! = "<<fctrl(number);
        
        
    }else if(choice=='3'){
        //Declare Variables
        int number;
        //Initialize Variables

        //Process/Map inputs to outputs
        cout<<"Input a number to test if Prime."<<endl;
        cin>>number;

        //Output data
        if (isPrime(number))
            cout<<number<<" is prime.";
        else
            cout<<number<<" is not prime.";
        
        
    }else if(choice=='4'){
        //Declare Variables
        int n;

        //Initialize Variables
        cout<<"Collatz Conjecture Test"<<endl;
        cout<<"Input a sequence start"<<endl;
        cin>>n;

        //Process/Map inputs to outputs
        cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                collatz(n)<<" steps";
        
        
    }else if(choice=='5'){
        //Declare Variables
        int n,ns;

        //Initialize Variables
        cout<<"Collatz Conjecture Test"<<endl;
        cout<<"Input a sequence start"<<endl;
        cin>>n;

        //Process/Map inputs to outputs
        ns=ocollatz(n);

        //Output data
        cout<<endl<<"Sequence start of "<<n<<" cycles to 1 in "<<
                ns<<" steps";
        
        
    }else if(choice=='6'){
        cout<<"Place Trig Problem Here"<<endl;
    }else if(choice=='7'){
        //declare variables
        int hrs,        //hours
            mins,       //minutes
            convHrs;    //hours converted
        char c=':',     //colon
            amPm,       //am or pm
            choice;     //choice to continue
        bool valid;

        cout<<"Military Time Converter to Standard Time"<<endl;
        cout<<"Input Military Time hh:mm"<<endl;

        do{
        timeInput(hrs,mins,c,valid);

        if(valid==true){
        conversion(hrs,convHrs,amPm);
        output(hrs,mins,convHrs,amPm);
        }
        cout<<"Would you like to convert another time (y/n)"<<endl;
        cin>>choice;
        }while (choice=='Y'||choice=='y');
        
        
    }else if(choice=='8'){
        float futVal,intRate;
        int   years;

        cout<<"This is a Present Value Computation"<<endl;
        cout<<"Input the Future Value in Dollars"<<endl;
        cin>>futVal;
        cout<<"Input the Number of Years"<<endl;
        cin>>years;
        cout<<"Input the Interest Rate %/yr"<<endl;
        cin>>intRate;

        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"The Present Value = $"<<psntVal(futVal,intRate,years);

    }else if(choice=='9'){
        int score1,score2,score3,score4,score5;
        getScre (score1,score2,score3,score4,score5);
        calcAvg (score1,score2,score3,score4,score5);
        fndLwst (score1,score2,score3,score4,score5);
        
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}
//prob 1
void minmax(int num1,int num2,int num3,int& min,int& max){
    if (num1>num2&&num1>num3){
        max=num1;}
    else if (num2>num1&&num2>num3){
        max=num2;}
    else if (num3>num1&&num3>num2){
        max=num3;}
        
    if (num1<num2&&num1<num3){
        min=num1;}
    else if (num2<num1&&num2<num3){
        min=num2;}
    else if (num3<num1&&num3<num2){
        min=num3;}
    }


//prob 2
int fctrl(int number){
    if (number==1||number==0)
    return 1;
    return number*fctrl(number-1); 
}

//prob 3
bool isPrime(int number){
int i;
    if (number==0||number==1)
        return false;
	for(i=2; i<number; i++)
		if (number%i==0)
			return false;
	else return true;
}

//prob 4
int collatz(int n){
int i=1;
while (n!=1){
        if (n%2==0){
            n=n/2;}
        else{
            n=3*n+1;}
        i++;
    }   
return i;
}

//prob 5
int ocollatz(int n){
cout<<n;
int i=0;
do{
    while (n!=1){
        if (n%2==0){
            n=n/2;
            cout<<", "<<n;}
        else{
            n=3*n+1;
            cout<<", "<<n;}
            i++;
    }
}
while (n!=1);{
        if (n%2==0){
            n=n/2;}
        else{
            n=3*n+1;}
        i++;
    } 
return i;
}

//prob 6

//prob 7
void timeInput(int &hrs,int &mins,char &c,bool &valid){
    cin>>hrs>>c>>mins;
    
//input validation
    if (hrs>24||mins>59){
        cout<<hrs<<":"<<mins<<" is not a valid time"<<endl;
        valid=false;
    }
    else
        valid=true;
}

void conversion(int &hrs,int &convHrs,char &amPm){
    if (hrs==0){
        convHrs=12;
        amPm='A';
    }else if (hrs>=13){
        convHrs=hrs-12;
        amPm='P';
    }else if (hrs<12){
        convHrs=hrs;
        amPm='A';
    }else if (hrs==12){
        convHrs=12;
        amPm='P';
    }
}

void output(int &hrs,int &mins,int &convHrs,char &amPm){
    if (hrs==0){
        cout<<"00:"<<mins<<" = ";
        cout<<convHrs<<":"<<mins<<" "<<amPm<<"M"<<endl;
    }else{
     cout<<hrs<<":"<<mins<<" = ";
     cout<<convHrs<<":"<<mins<<" "<<amPm<<"M"<<endl;
    }
}
//prob 8
float psntVal(float futVal,float intRate,int years){
    intRate*=0.01f;
    return futVal/pow((1+intRate),years);
}
//prob 9
void getScre(int &tst1,int &tst2,int &tst3,int &tst4,int &tst5){
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    cout<<"Input the 5 test scores."<<endl;
    cin>>tst1>>tst2>>tst3>>tst4>>tst5;
}


int fndLwst(int tst1,int tst2,int tst3,int tst4,int tst5){
int dropTst;
    if (tst1<tst2&&tst1<tst3&&tst1<tst4&&tst1<tst5)
        dropTst=tst1;
    else if (tst2<tst1&&tst2<tst3&&tst2<tst4&&tst2<tst5)
        dropTst=tst2;
    else if (tst3<tst1&&tst3<tst2&&tst3<tst4&&tst3<tst5)
        dropTst=tst3;   
    else if (tst4<tst1&&tst4<tst2&&tst4<tst3&&tst4<tst5)
        dropTst=tst4;
    else if (tst5<tst1&&tst5<tst2&&tst5<tst3&&tst5<tst4)
        dropTst=tst5;
return dropTst;
}

float calcAvg(int tst1,int tst2,int tst3,int tst4,int tst5){
    int lowTst=fndLwst(tst1,tst2,tst3,tst4,tst5);
    float avg=(tst1+tst2+tst3+tst4+tst5-lowTst)/4.0f;
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The average test score = "<<avg;

}