/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 1, 2015, 12:31 PM
 * purpose: infinite sequence 
 */

#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
//user librareis 

//global contants 
const float PI=4*atan(1);
// function prototypes

// execution begins here 


/*
 * 
 */
int main(int argc, char** argv) {
//declare variables 
    int nTerms=2000000000;
    float apprxPI =1;
    
    //now calculate pi with a for loop 
    
    for(int i = 3, nTerm = 1; nTerm<=nTerms; i+=4,nTerms+=2){
        apprxPI+=(-1.0f/i+1.0f/(i+2));
        
    }
    apprxPI*=4;
    
    //ouput the result and comapre
    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact Value of P = " <<PI<<endl;
    cout<<"the approximate value of PI = " <<apprxPI<<endl;
    
    return 0;
}

