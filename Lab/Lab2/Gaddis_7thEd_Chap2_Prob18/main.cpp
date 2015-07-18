/* 
 * File:   main.cpp
 * Author:Jesus Galeano
 *
 * Created on June 23, 2015, 12:52 PM
 */
//system libraries
#include <cstdlib>
#include <iostream>//I/O library


using namespace std; //namespace for iostream
//user libraries 

//global constants 
const float CNVPCT = 100.0f; //a constant that dr lehr used to convert percents.

//function prototypes

//Exectution begins here 
/*
 * 
 */
int main(int argc, char** argv) {
    //Declares Variables 
    unsigned short cSurv = 12467; //amount of people surveyed
    unsigned char pEDrinks = 14; // percent of energy drinkers that drank more then 1
    unsigned char pCDrinks = 64; //percent of surveyed people that perfer citrus flavor
    unsigned short nEDrinks;  // number of people who drank energy drinks
    unsigned short nCDrinks;  // number of citrus flavor energy drinkers 
    
    //Calculate number of drinkers 
    nEDrinks = cSurv*pEDrinks/CNVPCT; 
    
    //prompt user
    cout << " NUMBER OF ENERGY DRINKERS "<< endl;\
//output results
    cout << nEDrinks <<endl; 
    
    //calculate number of drinkers who perfer citrus flavor. 
    
    nCDrinks = nEDrinks*pCDrinks/CNVPCT;
    
    
    //prompt user 
    cout << " NUMBER OF ENERGY DRINKERS WHO PERFERED CITRUS FLAVORED "
            "ENEGRY DRINKS "
            <<endl;
    //output results 
    cout << nCDrinks <<endl; 
    
    
    return 0;
}

