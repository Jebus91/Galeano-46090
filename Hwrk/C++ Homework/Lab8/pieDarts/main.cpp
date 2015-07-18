/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 2, 2015, 10:21 AM
 * purpose: approximate pi with a dart board
 */
// system libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;
//user libraries

// global constants 
const double PI =4*atan(1.0);
const double MXRND = pow(2, 31) -1;
// function prototypes 

// execution begins here

int main(int argc, char** argv) {
// set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    // determine the maximum and min 
    
    unsigned int max = rand(), min=rand();
    unsigned int nDart = 1000, nDartIn = 0;
    float apprxPI=0;
    //loop to find the min and max
    for(int dart =1; dart<=nDart;dart++){
        unsigned int random = rand();
        if(random >max) max= random;
        if(random <min) min= random;
        
        float x = rand()/MXRND;//[0,1]
        float y = rand()/MXRND;//[0,1]
        if(x*x+y*y<=1)nDartIn++;
    }
    apprxPI = 4.0f*nDartIn/nDart;
    
    cout<< fixed << showpoint<< setprecision(20);
    cout<<"the minimum random number = " <<min<<endl;
    cout<<"the maximum random number = " <<max<<endl;
    cout<<"2^31-1 = "<<pow(2,31)-1<<endl;
    
    cout<<"exact Value of PI = "<<PI<<endl;
    cout<<"the approximate value of pi = "<<apprxPI<<endl;
    
    //exitstage right
    
    
    
    
    
    return 0;
}

