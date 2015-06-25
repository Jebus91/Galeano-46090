/* 
 * File:   main.cpp
 * Author: Jesus Galeano        
 *
 * Created on June 25, 2015, 12:25 PM
 * purpose: compare violent crimes us vs uk
 */

//system Libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries 

//Global Constants 

// function prototypes

//execution begins here 
/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables 
    float usCrimes; // number of violent crimes in the United States
    float ukCrimes; //number of violent crimes in the united kingdom(england)
    float uspop;    // population of the united states 
    float ukpop;    // population of the UK
    float usCrimePercent; // Percent of crimes in the united states
    float ukCrimePercent; // Percent of crimes in the UK 
    
    //initialize Values  
    usCrimes = 11.88;
    ukCrimes = 6.52;
    uspop    = 318;
    ukpop    = 64.1;
    
    // Calculate Crime percent
    usCrimePercent = (usCrimes/uspop)*100;
    ukCrimePercent = (ukCrimes/ukpop)*100;
    
    //output results 
    cout << setw(6)<< setprecision(2) << fixed << usCrimePercent << " % "
     << " Violent crimes " <<endl;
    
    cout <<setw(6) << setprecision(2) << fixed << ukCrimePercent << " % "
     << " Violent crimes " <<endl;
    
    
    
    //Exit Stage right
    return 0;
}

