/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 11, 2015, 6:39 PM
 * purpose: home work find cloths size based of of height weight etc
 */
//system libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

//global constants 

//function prototypes
float hatSz(float, float);  // hat seize
float jckSz(float, float, float); // jacket size
float waiSz(float, float, float); // waist size


//execution begins here
int main(int argc, char** argv) {
//declare variables 
    float height;
    float weight;
    float years;
    
    //prompt user  and ask for input 
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"how  tall are you in inches?"<<endl;
    cin>>height;
    
    cout<<"how much do you weight in pounds?"<<endl;
    cin>>weight;
    
    cout<<"how old are you??"<<endl;
    cin>>years;
    
    //output the results 
    cout<< hatSz(weight, height)<<" inches is your hat size"<<endl;
    cout<< jckSz(height, weight, years)<<" inches is your jacket size"<<endl;
    cout<< waiSz(height, weight, years)<<" inches is your waist  size"<<endl;
    
    return 0;
}


/******************************************************
 ***************** hat size  ***********************
 ******************************************************
 * Purpose:  find hat size
 * Input:
 *   height and weight
 * Output:
 *    hat size
 */
float hatSz(float weight, float height){
    return (weight/height) * 2.9f;
}
\
/******************************************************
 ***************** jacket size  ***********************
 ******************************************************
 * Purpose:  find jacket size
 * Input:
 *   height and weight and years
 * Output:
 *   jacket size
 */
float jckSz(float height, float weight, float years){
     float chestSz;
    if(years >= 40){
        chestSz = ((height * weight) /288.0f) + (0.125f * (years / 10));
    }else{
     chestSz = height * weight /288.0f;
    } return chestSz;
}

/******************************************************
 ***************** waist size  ***********************
 ******************************************************
 * Purpose:  find waist size
 * Input:
 *   height and weight and years
 * Output:
 *   waist size
 */
float waiSz(float height, float weight, float years){
    float waistSz;
    if(years >= 30){
        waistSz = (weight / 5.7f) + (0.1f * years) ;
    }else{waistSz = weight / 5.7f;     
    }   
    return waistSz;
}