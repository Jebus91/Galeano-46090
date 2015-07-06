/* 
 * File:   main.cpp
 * Author: Jesus galeano
 *
 * Created on July 1, 2015, 11:21 AM
 * purpose: Calculate monthly payment
 */

#include <cstdlib>
#include <iostream>
#include<iomanip>


using namespace std;

// user libraries 

//global libraries 

//function prototypes \

// execution beings here 

int main(int argc, char** argv) {
//declare Variables 
    unsigned char nMonths = 36; //number of months to payoff loan 
    unsigned short loan = 10000; //loan amount in $'s
    float ir = 0.01f; //interest rate per month
    float mnthPay;   //monthly payments in $'s
    float temp =1.0f;    // intermediate value found in the monthly payment equation 
    float cstLoan;  //cost of the loan in $'s
    float totCost;
    //calculate the intermediate value 
    float onePlsi=(1+ir);
    for(int months=1;months<=nMonths;months++ ){
        temp*=onePlsi;
    }
    
    //calculate monthly payment
    
    mnthPay = ir*temp*loan/(temp-1);
    int imnthPay = mnthPay*100; //<----V
    mnthPay = imnthPay/100;  //this will cut off the fractional portion.
    //mnthPay = static_cast<int>(mnthPay*100)/100.0f; is the same as above to cut of fractional numbers
    //exact amount in pennies
    
    totCost =nMonths*mnthPay;
    cstLoan = totCost-loan;
    //output the results 
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"loan amount:           $"<<setw(8)<<loan*1.0f<<endl;
    cout<<"monthly interest rate: " <<setw(8)<<ir*100<<"%"<<endl;
    cout<<"number of payments:    " <<setw(8)<<static_cast<int>(nMonths)<<endl;
    cout<<"monthly payment:      $ " <<setw(8)<<mnthPay<<endl;
    cout<<"Amount paid Back:     $ " <<setw(8)<<totCost<<endl;
    cout<<"interest paid:        $ " <<setw(8)<<cstLoan<<endl;
    cout<<mnthPay<<endl;
    
    
    
    
    return 0;
}

