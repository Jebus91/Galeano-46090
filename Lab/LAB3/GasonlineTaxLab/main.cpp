/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 24, 2015, 1:17 PM
 * 
 * Purpose: to find total tax paid on gas and percent tax per gallon.
 */
//system libraries 
#include <cstdlib>
#include <iostream> //I/O library

using namespace std;//name space for iostream

// user libraries

// Global Constants

// function prototypes 

// Execution Begins here

/*
 * 
 */
int main(int argc, char** argv) {

    // Declare Variables 
    float fedTax;       //federal tax on gas
    float calExTax;     // California excise tax on gas
    float calSaleTax;   // California Sales tax on gas 
    float gasPrice;     // how much gasoline costs 
    float totTax;       // total tax paid
    float taxPercent;   // percent of tax on gas 
    float basePrice;    // price of gas without taxes 
    
    //Initialize Variables 
    fedTax     = .18;
    calExTax   = .38;
    calSaleTax = .08f;
    gasPrice   = 3.69;
   

//Calculate total tax paid and % tax paid. 
basePrice = gasPrice -(calExTax + fedTax);
 
calSaleTax = basePrice * calSaleTax; 

totTax = calSaleTax + calExTax + fedTax; 

taxPercent = totTax/gasPrice * 100;

//output results
cout << "total tax paid is " <<endl;
cout << totTax << " cents "  <<endl;

cout << "total Tax percent paid is " <<endl;
cout << taxPercent <<   " % "        <<endl;
 
 
 
 
  //Exit stage right
    
    return 0;
}

