/* 
 * File:   main.cpp
 * Author: adrian acevedo
 *Purpose: Collatz Sequence with Output of Sequence
 *
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<endl<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}
int collatz(int n){
cout<<n;
int i=0;
do{
    while (n!=1){
        if(n%2==0){
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
