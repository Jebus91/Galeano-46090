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
//float fact = 1; // factorial 
float delt =1.0f;  // incemental value for each term in the sequence
float x =2.0f;   // the x in e^x
float ex =1.0f; //first term in the exponential sequence
//char nTerms = 30;
float tol =1e-7; //determine the accuracy for the approximation 
// utilize a for loop to calculate e^x
    for(int term = 1 ; delt<-tol||delt>tol ; delt*=x/term, ex+=delt, term++){}    
        
    
cout<<fixed<<showpoint<<setprecision(15)<<endl;
cout<<"exact  e("<<x<<")="<<ex<<endl;
cout<<"approx e("<<x<<")="<<ex<<endl;


//output the results 
//cout<<static_cast<int>(n)<<"!= "<<fact<<endl;
    return 0;
}

