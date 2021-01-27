/* 
 * File:   main.cpp
 * Author: adrian acevedo
 *Purpose: Gaddis_9thEd_Chap6_Prob10_Average
 *
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//Function Prototypes
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int score1,score2,score3,score4,score5;
    getScre (score1,score2,score3,score4,score5);
    calcAvg (score1,score2,score3,score4,score5);
    fndLwst (score1,score2,score3,score4,score5);
    return 0;
}
void getScre (int &tst1,int &tst2,int &tst3,int &tst4,int &tst5){
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    cout<<"Input the 5 test scores."<<endl;
    cin>>tst1>>tst2>>tst3>>tst4>>tst5;
}
int fndLwst(int tst1,int tst2,int tst3,int tst4,int tst5){
    int dropTst;
    if(tst1<tst2&&tst1<tst3&&tst1<tst4&&tst1<tst5)
        dropTst=tst1;
    else if(tst2<tst1&&tst2<tst3&&tst2<tst4&&tst2<tst5)
        dropTst=tst2;
    else if(tst3<tst1&&tst3<tst2&&tst3<tst4&&tst3<tst5)
        dropTst=tst3;
    else if(tst4<tst1&&tst4<tst2&&tst4<tst3&&tst4<tst5)
        dropTst=tst4;
    else if(tst5<tst1&&tst5<tst2&&tst5<tst3&&tst5<tst4)
        dropTst=tst5;
return dropTst;
}
float calcAvg(int tst1,int tst2,int tst3,int tst4,int tst5){
int lowTst=fndLwst(tst1,tst2,tst3,tst4,tst5);
float avg=(tst1+tst2+tst3+tst4+tst5-lowTst)/4.0f;
cout<<fixed<<showpoint<<setprecision(1);
cout<<"The average test score = "<<avg;
    
}
