/* 
 * File:   main.cpp
 * Author: Jesus GALEANO
 *
 * Created on June 27, 2015, 7:35 PM
 * purpose:Homework 
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
    unsigned int numberOne; //the 1st number the user will input
    unsigned int numberTwo; //the 2nd number the user will input
    unsigned int sum;     // the addition of numberOne and numberTwo
    unsigned int product; // the Multiplication of numberOne and numberTwo
    
    //Input Values here
    
    //prompt user
 cout<<"Hello user I will give you the product and sum of the 2 numbers"<<endl;
 cout<<"you enter. Please Enter your First number:"<<endl;  
    
    //Process input here
    cin>>numberOne;
    
    //prompt user
    cout<<"Please Enter your second number:"<<endl;
    
    //Process input here
    cin>>numberTwo;
    
    //Calculations
    sum = numberOne + numberTwo;
    product = numberOne * numberTwo;
    
    
    //output
    cout<<"the Sum of the 2 number you inputed it: "<<sum<<endl;
    cout<<"the Product of the 2 number you inputed it: "<<product<<endl;
    
    // Exit Stage Right 
    return 0;
}

