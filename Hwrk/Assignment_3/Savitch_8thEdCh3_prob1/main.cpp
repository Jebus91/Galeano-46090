/* 
 * File:   main.cpp
 * Author: Jesus Galeano    
 *
 * Created on July 5, 2015, 7:04 PM
 * purpose: Homework
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

//global constants 

//function prototypes

//execution begins here
int main(int argc, char** argv) {
//Declare Variables;
    char p1;
    char p2;
    char r;
    char p;
    char s;
    char answer;
    
    
    //prompt user and ask for inputs 
    do{
    do{
    cout<<" Hello and welcome to a game of ROCK PAPER SCISSORS"<<endl;
    cout<<" this is can be played with 2 users maximum"<<endl;
    cout<<endl;
    cout<<"user one please type in r for ROCK"<<endl;
    cout<<"user one please type in p for PAPER"<<endl;
    cout<<"user one please type in s for SCISSORS"<<endl;
    cin>>p1;
    cout<<"user two please type in r for ROCK"<<endl;
    cout<<"user two please type in p for PAPER"<<endl;
    cout<<"user two please type in s for SCISSORS"<<endl; 
    cin>>p2;
  
    //logic for rock paper scissors
    if(p1 != 'r' && p1 != 'p' && p1 != 's' || p2 != 'r' && p2 != 'p' && p2 != 's' ){
        cout<<"you did not type in the correct key please re-enter your input"<<endl;
    }
    }while(p1 != 'r' && p1 != 'p' && p1 != 's' || p2 != 'r' && p2 != 'p' && p2 != 's' );
    if(p1 == 'p' && p2 == 'r'){
        cout<<"user one wins"<<endl;
    }
    if(p2 == 'p' && p1 == 'r'){
        cout<<"user two wins"<<endl;
    }
    
    if(p1 == 'r' && p2 == 's'){
        cout<<"user one wins"<<endl;
    }
     
    if(p2 == 'r' && p1 == 's'){
        cout<<"user two wins"<<endl;
    }
    if(p1 == 's' && p2 == 'p'){
        cout<<"user one wins"<<endl;
    }
    if(p2 == 's' && p2 == 'p'){
        cout<<"user two wins"<<endl;
    }
    if(p1 == 'r' && p2 == 'r'){
        cout<<"TIE"<<endl;
    }
    if(p1 == 's' && p2 == 's'){
        cout<<"TIE"<<endl;
    }
    if(p1 == 'p' && p2 == 'p'){
        cout<<"TIE"<<endl;
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

