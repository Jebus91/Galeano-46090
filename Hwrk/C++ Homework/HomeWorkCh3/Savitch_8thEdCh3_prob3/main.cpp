/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 5, 2015, 9:57 PM
 * Purpose: Home work
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//user libraries 

//global constants 

//function prototypes 

//execution begins here 

int main(int argc, char** argv) {
//declare varaibles 
    unsigned int months; //months of the year
    unsigned int num;    //days of the month
    
    //prompt user and ask for input
    cout<<"please enter a number between 1 and 12 to choose a month"<<endl;
    cout<<"1 = January"<<endl;
    cout<<"2 = February"<<endl;
    cout<<"3 = March"<<endl;
    cout<<"4 = April"<<endl;
    cout<<"5 = May"<<endl;
    cout<<"6 = June"<<endl;
    cout<<"7 = July"<<endl;
    cout<<"8 = August"<<endl;
    cout<<"9 = September"<<endl;
    cout<<"10 = October"<<endl;
    cout<<"11 = November"<<endl;
    cout<<"12 = December"<<endl;
    cin>>months;
    
    
    
    if(months == 1 ){
        cout<<months<<" January"<<endl;
    }
    if(months == 2){
        cout<<months<<" February"<<endl;
    }
    if(months == 3){
        cout<<months<<" March"<<endl;
    }
    if(months == 4){
        cout<<months<<" April"<<endl;
    }
    if(months == 5){
        cout<<months<<" May"<<endl;
    }
    if(months == 6){
        cout<<months<<" June"<<endl;
    }
    if(months == 7){
        cout<<months<<" July"<<endl;
    }
    if(months == 8){
        cout<<months<<" August"<<endl;
    }
    if(months == 9){
        cout<<months<<" September"<<endl;
    }
    if(months == 10){
        cout<<months<<" October"<<endl;
    }
    if(months == 11){
        cout<<months<<" Novemeber"<<endl;
    }
    if(months == 12){
        cout<<months<<" December"<<endl;
    }
    
    cout<<"Please enter the day of the month you were born on"<<endl;
    cin>>num;
    cout<<num;
    if(num < 1 || num > 31){
        cout<<"ERROR"<<endl;
    }
    
   
    return 0;
}

