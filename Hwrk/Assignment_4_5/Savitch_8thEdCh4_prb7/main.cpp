/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 10, 2015, 5:44 PM
 * Purpose: home work
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//user libraries 

//global constants 
const double grav = 6.67384e-11;

//function prototypes
float G(float, float, float, double );

//execution begins here
int main(int argc, char** argv) {
//declare Variables
    //1dyne =g*cm/secs^2
    float m1, m2, D;
    char answer;
    do{
    //prompt user
    cout<<"what is the mass of object 1?"<<endl;
    cin>>m1;
    
    cout<<"what is the mass of object 2?"<<endl;
    cin>>m2;
    
    cout<<"what is the distance between the 2 objects?"<<endl;
    cin>>D;
    
    cout<<G(m1,m2,D,grav)<<" gravitational Force"<<endl;
    cout<<G(m1,m2,D,grav)*(grav*D)<<" / sec^2 dynes"<<endl;
    
    
      //prompt user if he would like to run the program again
    cout<<"would you like to re run the program? please enter y for yes "<<endl;
    cout<<" and please enter n for no "<<endl;
    cin>>answer;
    
    if(answer != 'y'){
        cout<<"thank you, and bye"<<endl;
    }
 
    }while(answer == 'y');
    
    
    
    return 0;
}


/******************************************************
 ***************** Gravity  ***********************
 ******************************************************
 * Purpose:  find gravitational Force
 * Input:
 *      mass of object 1 and mass of object 2, distance and gravity
 * Output:
 *    gravitational Force
 */
float G(float m1, float m2, float D, double grav){
    float F = grav*((m1*m2)/(D*D));
    return F;    
}