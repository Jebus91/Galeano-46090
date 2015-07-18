/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 4, 2015, 8:11 PM
 * purpose: homework
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//user libraries 

//function prototypes 

//global constants 

//execution begins here 
int main(int argc, char** argv) {
    //declare variables 
    float hrs; //hours worked
    float pay; //pay rate
    float ovrTime; //over time
    float SST;   //social security tax
    float fedtax;//federal income tax
    float stTax; //state income tax
    float uDues; //union dues 
    float depnd; //  3 dependents 
    char  answer; // user input 

    //intialize 
    SST = .06;
    fedtax = .14;
    stTax = .05;
    uDues = 10;
    
    do{
    //prompt user 
cout<<"how much do you get paid an hour?"<<endl;
cin>>pay;
    
cout<<"how many hrs did you work this week?"<<endl;
cin>>hrs;

cout<<"how many hours of overtime did you have? "<<endl;
cin>>ovrTime;

cout<<"do you have 3 or more dependents? please type y for yes and anything else for no. "<<endl;
cin>>answer;
            if(answer =='y'){
                 depnd = 35;
            }else{depnd = 0;}
  
//calculations
if(ovrTime > 0  &&  answer == 'y'){
    pay = ((pay * hrs) * 1.5) -depnd;
}else{
if(ovrTime > 0 ){
    pay = (pay *hrs) *1.5;          
}else{
if(depnd == 35){
    pay = (pay * hrs) - depnd;
   
}
}
}
//output the results 
cout<<fixed<<showpoint<<setprecision(2)<<endl;



cout<<"your paycheck with out any deductions or witholdings is: "<<pay<<" $"<<endl;
cout<<"your paycheck with all deductions is: ";
cout<<(pay-((pay - uDues) * 0.25f))<<endl;


//prompt user if they would like to calculate again
    cout<<"would you like to run this program again? please enter y for yes";
    cout<<" and anything else for no"<<endl;
            cin>>answer;
            if(answer !='y'){
                cout<<"thank you and bye"<<endl;
            }
            }while(answer == 'y');
            
            
    return 0;
}

