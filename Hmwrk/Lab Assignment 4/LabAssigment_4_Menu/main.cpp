/* 
 * File:   main.cpp
 * Author: adrian Acevedo
 * Created on January 19, 2021, 10:32 PM
 * Purpose:  Menu for Assignment 4
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Declare Variables
    char choice;
    string sign1, sign2, name, name2, name3;
    string run1, run2, run3; //Runners name
    
    
   
    //Display Menu
    cout<<"Menu For Homework"<<endl;
    cout<<"Type 1 for Gaddis SortNames Problem"<<endl;
    cout<<"Type 2 for Gaddis Book Problem"<<endl;
    cout<<"Type 3 for Gaddis BankCharges Problem"<<endl;
    cout<<"Type 4 for Gaddis Race Problem"<<endl;
    cout<<"Type 5 for Gaddis ISP Problem"<<endl;
    cout<<"Type 6 for Gaddis RockPaperScissor Problem"<<endl;
    cout<<"Type 7 for Savitch Roman Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Compatible Sign Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case'1':
    
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
            break;
        case'2':
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
            break;
        case'3':
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
            break;
        case'4':
            //Declare Variables
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
            break;
        case'5':
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
            break;
        case'6':
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
            break;
        case'7':
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
            break;
        case'8':
            //Declare Variables
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
    }
   
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}