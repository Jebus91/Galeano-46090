/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 11, 2015, 7:58 PM
 * purpose: function thats finds MAX home work
 */
//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//user libraries 

//global constants 

// function prototypes
float MAX(float, float, float);
//execution begins here
/*
 * 
 */
int main(int argc, char** argv) {
//declare varaibles 
    float num1, num2, num3;//number that user will be inputing
    
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"hello user please input a number"<<endl;
    cin>>num1;
    
     cout<<"hello user please input a second number"<<endl;
    cin>>num2;
    
     cout<<"hello user please input a third number"<<endl;
    cin>>num3;
    
    //output results
    cout<<MAX(num1, num2, num3)<<" is the MAX"<<endl;
    
    return 0;
}


/******************************************************
 ***************** MAX  ***********************
 ******************************************************
 * Purpose:  find  largest number
 * Input:
 *   3 different number
 * Output:
 *    biggest number
 */
float MAX(float num1, float num2, float num3){
    if(num1 > num2 && num1 > num3){
        return num1;
    }
     if(num2 > num1 && num2 > num3){
        return num2;
    }
     if(num3 > num1 && num3 > num2){
        return num3;
    }
}
