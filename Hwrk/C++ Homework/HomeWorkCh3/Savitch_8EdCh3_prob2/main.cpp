/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 5, 2015, 9:26 PM
 * purpose:Homework
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//user libraries 

//global constants 

//function prototypes

//executions begins here 
int main(int argc, char** argv) {
//Declare Varaibles 
    float balance;
    float totAmtDue;
    float interest;
    float minPay;
    char answer;
    
    do{
    cout<<"what is your balance ? please eneter a number"<<endl;
    cin>>balance;
    interest = (balance * .015f);
    totAmtDue = (balance * .015f) + balance;
    minPay = totAmtDue * 0.1f;
    if(balance > 1000.0f){
    interest = (balance * .001f);
    totAmtDue = (balance * .001f) + balance;
    }
    
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"total amount due is "<<totAmtDue<< " $"<<endl;
    cout<<"the Interest amount is "<<interest<<" $"<<endl;
    cout<<"Minimum Payment due is "<<minPay<<" $"<<endl;
    
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

