/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 * Created on July 4, 2015, 1:27 PM
 * purpose: Homework
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

// global constants 

// function prototypes 

// execution begins here 
int main(int argc, char** argv) {
//Declare Varaiables 
   float payUp = 0.76 ; // pay increase
   float pay          ; //annual salary 
   float newInc       ; // income after raise 
   char answer        ;
   
   do{
  //prompt user and input pay
   cout<<"hello user please enter how much money did you make in 6 months($)"<<endl;
   cin>>pay;
   
   //calculate
    newInc=pay*payUp+pay;
    
   //prompt user 
   cout<<" there was a pay increase for the next 6 months of 7.6%"<<endl;
   cout<<" your new income for the next 6 months will be "<<newInc<<" $"<<endl;
   
    //prompt user if they would like to calculate again
    cout<<"would you like to run this program again? please enter y for yes";
    cout<<" and anything else for no"<<endl;
            cin>>answer;
            if(answer !='y'){
                cout<<"thank you and bye"<<endl;
            }
            }while(answer == 'y');
            
    return 0;
}

