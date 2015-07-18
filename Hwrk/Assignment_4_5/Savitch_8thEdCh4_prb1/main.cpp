/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 10, 2015, 6:13 PM
 * Purpose: home work
 */
//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

//global constants 
const float gasLtrs = 0.264179f; //0.264179 liters is = to 1 gallon.

//function prototypes
float mpg(float, float); //Miles per gallon


//execution begins here
int main(int argc, char** argv) {
//declare Variables
    //1 gallon = 3.785 liters
    float liters;// input for how many liters of gas consumed by car
    float miles; //input for how many miles traveled
    float gas; // liter converted to gallons of gas
    char answer; // input to re run the program
    
    do{
    //prompt user, ask how many liters consumed and miles traveled 
    cout<<" hello user how many liters of gas did your car consume"<<endl;
    cin>>liters;
    
    cout<<"how many miles did you travel?"<<endl;
    cin>>miles;
    
    //calculate 
    //liters to gallons 
    gas =  liters * gasLtrs ;
    
    //output results
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"you get "<<mpg(liters,miles)<< " Miles Per Gallon(MPG)"<<endl;
    cout<<"liters to gallons: "<<liters<<" liters"<<" is "<< gas<<" gallons"<<endl;
    
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
 ***************** MPG   ******************************
 ******************************************************
 * Purpose:  calculate Miles per gallon
 * Input:
 *      liters and miles traveled. liter will be converted to gallons
 * Output:
 *    miles per gallon 
 */
float mpg(float liters, float miles){
    float milespg = miles/(liters * gasLtrs);
    return milespg;
    
}