/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 27, 2015, 7:00 PM
 * purpose:Homework
 */
//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

//User libraries 

//Global Constants 

// Function Prototypes 

// Execution Begins Here


int main(int argc, char** argv) {
//Declare Variables Here
   char input; //Value will be a letter inputed by the user
   
//Input Values here
   
//prompt user
    cout<<"Note:[Press enter after entering a letter]"<<endl;
    cout<<endl;
    cout<<"Enter a letter form the keyboard: "<<endl;
   
//Process input here
    cin>>input;
    
//calculations
    
//output results
    cout<<setw(5)<<input<<" "<<input<<" "<<input<<endl;
    cout<<setw(4)<<input<<setw(5)<<input<<endl;
    cout<<setw(3)<<input<<endl;
    cout<<setw(3)<<input<<endl;
    cout<<setw(3)<<input<<endl;
    cout<<setw(3)<<input<<endl;
    cout<<setw(3)<<input<<endl;
    cout<<setw(4)<<input<<setw(5)<<input<<endl;
    cout<<setw(5)<<input<<" "<<input<<" "<<input<<endl;
    
    
    
     // Exit Stage Right
    return 0;
}

