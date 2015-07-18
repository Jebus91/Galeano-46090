/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 22, 2015, 6:33 PM
 * 
 * Purpose: First Program to test the IDE
 */

//System Libraries

#include <cstdlib>

#include <iostream> //File I/O

using namespace std; //std namespace -> iostream

//User libraries 

//Global Constants 

// Function Prototypes 

// Execution Begins Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables Here
    float hours,rate,pay;
    
    //Input Values here
    hours=40; //units = hours
    rate=10; //units = $'s/hours

    //Process input here
    pay=hours*rate; //units = $'s
    
    //output
    cout<<" Hours worked =  "<< hours <<"(hrs)"   <<endl;
    cout<<" Pay Rate     = $"<< rate  <<"/(hrs)" <<endl;
    cout<<" my Pay check = $"<< pay               <<endl;
    
    
    
    // Exit Stage Right 
    
    return 0;
}

