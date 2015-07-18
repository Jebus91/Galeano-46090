/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 27, 2015, 8:08 PM
 * purpose: Homework
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//User libraries 

//Global Constants 

// Function Prototypes 

// Execution Begins Here


int main(int argc, char** argv) {
    
 //Declare Variables Here
    unsigned short quarter;
    unsigned short dime;
    unsigned short nickles;
    unsigned short quarterInput; // the number the user inputs
    unsigned short dimeInput;   // the number the user inputs
    unsigned short nicklesInput; // the number the user inputs
    unsigned short total;    
    
    //Input Values here
    quarter = 25;
    dime = 10;
    nickles = 5;
 
    
    //prompt user
    cout<<"Enter a number of Quarters"<<endl;
    
    //Process input here
    cin>>quarterInput;
    
    
    //prompt user
    cout<<"Enter a number of dimes"<<endl;
    
   //Process input here
    cin>>dimeInput;
    
      //prompt user
    cout<<"Enter a number of nickles"<<endl;
    
    //Process input here
    cin>>nicklesInput;
    
    //calculation
    total = (nicklesInput*nickles) + (quarterInput*quarter) + (dimeInput*dime); 
    
    //output
    cout <<"there are " <<total<<" cents"<<endl;
    // Exit Stage Right 
    return 0;
}

