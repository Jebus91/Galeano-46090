/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 23, 2015, 12:07 PM
 * Purpose: HW, Free Fall 
 */

//system Libraries 


#include <cstdlib>
#include <iostream>//i/o ;ibrary 

using namespace std; //Name space for Iostream
//User libraries 

//Global Constants 
const float GRAVITY = 32.174; // Acceleration due to gravity
// could also be 3.2714e1f
//function prototypes

//execution begins here 
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables 
    float dist; //dist = the Distance dropped in feet 
    float time; // time = time in seconds 
    
    //prompt then input the time 
    
    cout <<"to calculate the distance dropped "<<endl;
    cout <<"input the time in seconds "<<endl;
    cout <<"time should be in the floating point format"<<endl;
    cin >> time; 
    
    //calculate the free fall distance 
    
    dist = GRAVITY*time*time/2;
    //this is a problem becuase 1/2 is 0.5 and 0 divided by naything is 0
    //a fix could be to write it as 1.0f/2*GRAVITY*time*time; another way
    //the correct way to do it is GRAVITY*time*time/2
    
    //output the results 
    cout <<"the distance traveled = ";
    cout << dist <<"(ft)"<<endl;
    //exit stage right 
    
    
    
    
    
    
    return 0;
}

