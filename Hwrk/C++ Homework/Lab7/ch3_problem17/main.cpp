/* 
 * File:   main.cpp
 * Author: jesus Galeano
 *
 * Created on July 1, 2015, 11:04 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float intRate = 0.01f;
    float numPay = 36;
    float lnAmnt = 10000;
  
    float monPay;
    
    monPay = (intRate*(1+intRate)^numPay*lnAmnt) /((1+intRate)^numPay-1);
    
    cout<<monPay<<endl;
    
    
    return 0;
}

