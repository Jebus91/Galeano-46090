/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 23, 2015, 1:36 PM
 * purpose: to calculate percent of military budget 
 */
//system libraries 
#include <cstdlib>
#include <iostream>
using namespace std;//namespace for iostream
//user libraries 
//global constants 
const float CNVPCT = 100.0f; //a constant that dr lehr used to convert percents.
//function prototypes 
//execution begins here 
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables 
    float FedBud= 3.9e12; // federal budget
    float MilBud= .598e12; // military budget 
    float percent; // percent = percent of federal budget dedicated to military
    
    //calculate the percent of the military budget
    percent=MilBud / FedBud * CNVPCT ;

    //output results 
    cout<< percent << " % " <<endl;
    //Exit stage right 
    return 0;
}

