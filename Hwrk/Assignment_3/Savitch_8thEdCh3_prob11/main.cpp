/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 2, 2015, 12:10 PM
 * purpose: Homework problem 11 solving
 * purpose: approximate e^x with an infinite sequence 
 * 
 */

//system libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//user libraries 

//global constants

// function prototypes 

// execution begins here 


int main(int argc, char** argv) {

//declare variables
float fact = 1; // factorial 
unsigned char n =30; 
float x =1.0f;
float ex =1.0f;
char nTerms = 30;
// utilize a for loop to calculate e^x
    for(int term = 1 ; term<=nTerms ; term++){
        float fact=1;
//loop and find the n factorial value
for(int i = 1; i<=term ; i++){
    fact*=i;
}
ex+=pow(x,term)/fact;
    }
cout<<fixed<<showpoint<<setprecision(15)<<endl;
cout<<"exact  e("<<x<<")="<<ex<<endl;
cout<<"approx e("<<x<<")="<<ex<<endl;


//output the results 
//cout<<static_cast<int>(n)<<"!= "<<fact<<endl;

    return 0;
}

