/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 4, 2015, 2:30 PM
 * purpose: Home WORK 
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

// global constants 

// function prototypes 

// execution begins here 
int main(int argc, char** argv) {
//Declare Varaiables 
    float loan; // loan amount 
    float lNeed; //loan needed to meet user cash need, 
    float intRate;//interest rate 
    float duration; //months
    float durationV2; // if greater then 12 months  duration = duration / 12;
    float intOwed;//interest owed 
    float mPay;//monthly payments 
    float actLoan; // actual amount of money loaned. 
    char answer;
    // actual amount loaned = (( loan * interest rate * duration)-loan)
    // calculating interest formula is  A = loan(1+(intRate/100)(duration/100))
   
    
    do{
    //prompt user and ask how much the loan is
    cout<<"Hello user please enter a loan amount"<<endl;
    cin>>loan;
    
    //prompt user and ask interest rate
    cout<<"Hello user please enter how much the interest rate is."<<endl;
    cin>>intRate;
    
    //prompt user and ask how many months 
    cout<<"hello user please enter how long the loan will be in months"<<endl;
    cin>>duration;
    
    
  
    //calculate 
   
    durationV2 =1 + (static_cast<int>(duration) % 11) ;
    
    mPay = (loan/duration);
    
  
    intOwed = (loan*intRate/100)*duration/12;
    
    actLoan = loan - intOwed;
   
    lNeed = loan + intOwed;
    
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"your loan amount it: "<<loan<<" $"<<endl;
    cout<<"your interest rate is: "<<intRate<<" %"<<endl;
    cout<<"you loan will be for: "<<duration<<" Months"<<endl;
    cout<<"your Monthly Payments will be: "<<mPay<<" $ a month"<<endl;
    cout<<"Interest paid will be: "<<intOwed<<" $"<<endl;
    cout<<"the actual amount of money loaned to you is: "<<actLoan<<" $"<<endl;
    cout<<"the loan amount you need to fullfill you money need is: "<<lNeed<<" $"<<endl;
    
    
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

