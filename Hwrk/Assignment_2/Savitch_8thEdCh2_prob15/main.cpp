/* 
 * File:   main.cpp
 * Author: Jesus Galeano    
 *
 * Created on July 5, 2015, 7:04 PM
 * purpose: Homework
 */


#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//user libraries 

//global constants 

//function prototypes

//execution beigins here

int main(int argc, char** argv) {
    //delcare Variables 
    float T; //temperature
    float Ti; //Temperature in Celcius intiail
    float Tf; //temperature in celcius final
    float velocity; //velocity = 331.3f + 0.61f * T++;
     
  
    cout<<"what is the beginning Temperature?"<<endl;
    cin>>Ti;
 
    cout<<"what is the Final Temperature?"<<endl;
    cin>>Tf;
     
     for(int x = Ti; x < Tf; x++){
        velocity = 331.3f + 0.61f * T++;
       // cout<<velocity<<endl;
        cout<<fixed<<showpoint<<setprecision(2)<<endl;
        cout<<"at "<<T++<<" Degrees Celsius The Velocity of sound is "<<velocity<<" m/s"<<endl;
     }
    return 0;
}

