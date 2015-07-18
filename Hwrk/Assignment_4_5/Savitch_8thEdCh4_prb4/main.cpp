/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 10, 2015, 9:20 PM
 * Purpose: home work
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

//global constants 

//function prototypes
float inflation(float, float);
//execution begins here
int main(int argc, char** argv) {
//declare Variables
    //note inflation fomrula  ((B - A)/A)*100
    float priceT;  //price of your item presently 
    float priceLy; //price of your item last year
    char answer;
    
    do{
   //prompt user and ask for price of their item
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<" hello user what is the price of you item today ?"<<endl;
    cin>> priceT;
    
    cout<<"hello user what is the price of your item last year? "<<endl;
    cin>>priceLy;
    
    //output the results
    cout<< inflation(priceT, priceLy) <<" % inflation"<<endl;
    
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
 ***************** zINFLATIONz  ***********************
 ******************************************************
 * Purpose:  estimate inflation
 * Input:
 *      price of item last year and price currrently
 * Output:
 *    inflation percent
 */
float inflation(float priceT, float priceLy){
    float inf = ((priceT - priceLy)/priceLy)*100;
    return inf;
    
}