/* 
 * File:   main.cpp
 * Author: Jesus galeano
 *
 * Created on July 4, 2015, 6:50 PM
 * purpose:Home work 
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
//declare Variables 
    unsigned int cap = 50;
    unsigned int ppl; 
    char answer; 
    
    do{
   //promt user and input
    cout<<"this room can only hold 50 people ";
    cout<<"how many people are in the room. "<<endl;
    cin>>ppl;
    
    if(cap == ppl){
        cout<<"room is at capacity"<<endl;
    }
    if(ppl > cap){
        cout<< "it is illegal for that many people to be in the room"<<endl;
        unsigned int ovc;
        ovc = ppl - cap;
        cout<<ovc<<" people need to leave for it to be legal to be in ";
        cout<<"in that room"<<endl;
    }
    if(ppl < cap){
        cout<< "there are only "<<ppl<<" in this room there is still room for ";
        cout<< cap - ppl <<" people before it becomes illegal "<<endl;
    }
    
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

