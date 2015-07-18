/* 
 * File:   main.cpp
 * Author: Jesus Galeano        
 *
 * Created on July 1, 2015, 1:06 PM
 * Purpose: Home work ch 2 problem 1
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//user libraries 

// global constants 

// function prototypes 

//execution begins here 

int main(int argc, char** argv) {
//declare Variables 
    int mt = 35273.92; //1 metric tons IN OUNCES 
    int cereal;  // Break fast cereal in ounces 
    int boxsCrl; // total number of boxes it take to equal one metrci ton.
    char answer; // response user gives
    
    
    //prompt user and intialize cereal
    do{
    cout<<" hello user in this program we will calculate how many "<<endl;
    cout<<" boxes of cereal we need to equal on metric ton in ounces"<<endl;
    cout<<" hello user how much does you cereal box weigh(ounces) ? "<<endl;
    cout<<" please enter the weight(ounces) of your cereal box "<<endl;
    do{
    cin>>cereal;
    if(cereal > mt){
        cout<<"your box of cereal is to heavy please re enter another weight "
                <<"for you cereal "<<endl;
    }
    }while(cereal > mt);
    
    // prompt user on how much a metric ton is in ounces
    cout<<" hello user a metric ton in ounces is: "<<mt<<endl;
    
    //calculate how many boxs of cereal it woudl take to make 1 metric ton
    boxsCrl = mt / cereal;
    
    //prompt user again on how many boxes of cereal it would take
    cout<<"it woudl take: "<<boxsCrl
        <<" boxs of your cereal to make one metric ton "<<endl;
    cout<<"or "<<mt<<"(ounces)"<<endl;
    cout<<" would you like to repeat this process again?"<<endl;
    cout<<" please enter y for yes and anything else for no"<<endl;
    cin>>answer;
    
    }while(answer == 'y');
    
    //thank the user ^_^ 
    if(answer != 'y'){
        cout<<"thank you and bye"<<endl;
    }
    return 0;
}

