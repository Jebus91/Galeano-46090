/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 27, 2015, 7:23 PM
 * purpose:homework
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
   float number_of_pods; // value for variable will be inputed 
   float peas_per_pods;  // value for variable will be inputed 
   float total_peas;     // value for variable will be inputed 
   
 //Input Values here
    
 //prompt user
    cout<<"HELLO WORLD"<<endl;
    cout<<endl;
    cout<<"Note:[Press enter after entering a number]"<<endl;
    cout<<endl;
    cout<<"Enter the number of pods: [Note, zero cannot be an input] "<<endl;
   
 //Process input here
    cin>> number_of_pods;
    do
    if(number_of_pods == 0 ){
        cout<<"please re enter the number of pods:" <<endl;
        cin>> number_of_pods;
    }
    while(number_of_pods == 0 );
        
 //prompt user  
    cout<<"enter the number of peas in a pod [Note, zero cannot be an input] "<<endl;
    
 //Process input here
    cin>> peas_per_pods;
    do
        
     if(peas_per_pods == 0){
        cout<<"please re enter the number of peas in a pod"<<endl;
        cin>> peas_per_pods;
    }
    while(peas_per_pods == 0);
 //calculations
    total_peas = number_of_pods / peas_per_pods;
    
   
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





