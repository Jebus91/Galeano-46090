/* 
 * File:   main.cpp
 * Author: Jesus Galeano        
 * 
 *
 * Created on June 25, 2015, 11:16 AM
 * purpose: To prove your math instructor
 * is wrong about adding positive numbers
 */

//systems libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <cmath>
using namespace std;
//user libraries

//global constants

// function prototypes 

//execution begins 

int main(int argc, char** argv) {
//Declare Variables 
    unsigned short a, b, c;
    short d, e, f;
    ofstream out;
    srand(static_cast <unsigned int>(time(0)));
    int thrwDice;
    
    //intialize Values 
    a = 20000;
    b = 50000;
    d = 20000;
    e = 30000;
    out.open("numbers.dat");
    thrwDice =rand()%6+1;
    
    //perform simple adddition 
    
    c= a + b;
    f= d + e;
            
    //output the results      
    cout<< setw(6)<< c <<" = "<< a <<" + "<< b <<endl;
    cout<< setw(6)<< f <<" = "<< d <<" + "<< e <<endl;
    out<<  setw(6)<< c <<" = "<< a <<" + "<< b <<endl;
    out<<  setw(6)<< f <<" = "<< d <<" + "<< e <<endl;
    cout<< "dice value " <<  thrwDice<<endl;        
    cout<< pow(2,3) << " = " <<exp(3*log(2))<<endl;    
    out.close();
    //Exit Stage right
    
    
    return 0;
}

