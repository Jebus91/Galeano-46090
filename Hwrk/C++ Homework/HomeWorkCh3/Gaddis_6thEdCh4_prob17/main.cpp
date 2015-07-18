/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 2, 2015, 1:00 PM
 * purpose: Home work
 */
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
//user libraries 

//global constants

//function prototypes

// executions begins here 
int main(int argc, char** argv) {
//declare variables 
    float num                  ;
    float rWaves  =.01         ;
    float mWaves  =.001        ;
    float infred  =.0000007    ;
    float visible =.0000004    ;
    float uV      =.00000001   ;
    float xRays   =.00000000001;
    float gamma   =gamma<xRays ;        
    
    
    cout<<" please enter a decimal number  = or less than .01 "<<endl;
    cin>>num;
    
    if(num > rWaves){
        cout<<" error "<<endl;
    }
    if((num <= rWaves) && (num > mWaves)){
        cout<<" RADIO WAVES"<<endl;
    }
    if((num <= mWaves) && (num > infred )){
        cout<<"INFRARED"<<endl;
    }
    if((num <= visible) && (num > uV)){
        cout<<"Visible"<<endl;
    }
    if((num <= uV) && (num > xRays)){
        cout<<"ULTRAVIOLET"<<endl;
    }
    if((num <= xRays) && (num > gamma)){
        cout<<"XRAYS"<<endl;
    }
    if((num <=  gamma)){
        cout<<"GAMMA"<<endl;
    }
    
    return 0;
}

