/* 
 * File:   main.cpp
 * Author: Jesus Galeano    
 *
 * Created on June 27, 2015, 7:17 PM
 * Purpose:Homework
 */


//System Libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//User libraries 

//Global Constants 

// Function Prototypes 

// Execution Begins Here


int main(int argc, char** argv) {
    
 //Declare Variables Here
   unsigned short number_of_pods; // value for variable will be inputed 
   unsigned short peas_per_pods;  // value for variable will be inputed 
   unsigned short total_peas;     // value for variable will be inputed 
   
 //Input Values here
    
 //prompt user
    cout<<"HELLO WORLD"<<endl;
    cout<<endl;
    cout<<"Note:[Press enter after entering a number]"<<endl;
    cout<<endl;
    cout<<"Enter the number of pods: "<<endl;
   
 //Process input here
    cin>> number_of_pods;
    
 //prompt user  
    cout<<"enter the number of peas in a pod"<<endl;
    
 //Process input here
    cin>> peas_per_pods;
    
 //calculations
    total_peas = number_of_pods * peas_per_pods;
    
 //output results
cout<<"if you have "<<number_of_pods<<" pea pods and "<<peas_per_pods<<
      " in each pod, then you have :"<<total_peas <<
      " peas in all your pods"<<endl;
 cout<<endl;
 cout<<"End of program"<<endl;
 cout<<endl;
 cout<<"Good Bye"<<endl;
 // Exit Stage Right 
    return 0;
}



