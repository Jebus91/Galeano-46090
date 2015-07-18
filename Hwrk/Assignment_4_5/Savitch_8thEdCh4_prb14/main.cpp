/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 12, 2015, 11:43 AM
 * purpose: home works BMR basal metabolic rate
 */
// system libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

//global constants 

//function prototypes 
float BMR(float); //Basal metabolci rate
float phyAct(float,float,float);  //physical activity
float EDF(float); //energy to digest food

//execution begins here
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables here
    float P; //weight in pounds lbs
    float intensity; // intensity of workout of activity
    float min;  // minutes 
    float cal;  // calories in yoru favorite food
    //prtompt user  
    
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"how much to do you weight in pounds?"<<endl;
    cin>>P;
    
    cout<<"please enter the intensity of your activicty as a number"<<endl;
    cin>>intensity;
    
    cout<<"how long were you donig this activity for in mintues? "<<endl;
    cin>>min; 
    
    cout<<"how many calories does your favorite food have? "<<endl;
    cin>>cal;
    
    cout<<BMR(P)<<" calories required to maintain weight"<<endl;
    cout<<phyAct(intensity, P, min)<<" calories required to maintain weight "<<endl;
    cout<<EDF(cal)<<"calories towards digestion"<<endl;
    cout<<(BMR(P)+phyAct(intensity, P, min)-EDF(cal))/BMR(P);
    cout<<"  servings of your food you can have a day to maintain weight"<<endl;
    
    //exit stage right
    return 0;
}
/******************************************************
 ***************** BASAL METABOLIC RATE ***********************
 ******************************************************
 * Purpose:  calories required to maintain weight
 * Input:
 *   weight in pounds
 * Output:
 *    calories required to maintain weight
 */
float BMR(float P){
    float calreq = 70.0f * (P/2.2f)*0.756f;
    return calreq;
}
/******************************************************
 ***************** physical Activity ***********************
 ******************************************************
 * Purpose:  calories require to maintain wieght 
 * Input:
 *  intensity of activity weight and minutes
 * Output:
 *    calories required to maintain weight
 */
float phyAct(float intensity,float P,float min){
    float calReq = 0.0385 * intensity * P * min;
    return calReq;
}
/******************************************************
 ***************** energy to digest food ***********************
 ******************************************************
 * Purpose:  how many calories digesting food takes up
 * Input:
 *   caloires in your favorite food
 * Output:
 *    caloreis consummed 
 */
float EDF(float cal){
    float calReq= cal *0.1f;
    return calReq;
}
