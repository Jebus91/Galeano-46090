/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 29, 2015, 1:03 PM
 * purpose: test swap
 */
//system libraries 
#include <cstdlib>
#include <iostream>

using namespace std;

//user libraries 

// global constants 

// function prototypes 

// execution begins here 

int main(int argc, char** argv) {
    // declare variables 
    int a,b;
    int min =10, max=100;

    //input the values for a and b
    cout<<"in the 2 intergers values between "<<min<<" ";
    cout<<max<<endl;
    
    cin>>a>>b;
    
    //validate the results 
    
    if((a>=min&&a<max) && (b>=min && b<max)){
        // prompt the user for which swap
        cout<<"what swap would you like to choose?"<<endl;
        cout<<"storage -> s or in-place -> i"<<endl;
        //declare the variable type
        char type;
        cin>>type;
        switch(type){
            case's':{
                int temp =a;
                a=b;
                b=temp;
                cout<<"type is visible due to scope "<<endl;
                cout<<"type = "<<endl;
                
                 //output the results for the swap
    cout<<"old a = "<<b<<",new a = "<<a<<endl;
    cout<<"old b = "<<a<<",new b = "<<b<<endl;
                
                
                break;
            }
            case'i':{
                a=a^b;
                b=a^b;
                a=a^b;
                        
                  //output the results for the swap
    cout<<"old a = "<<b<<",new a = "<<a<<endl;
    cout<<"old b = "<<a<<",new b = "<<b<<endl;       
                        
                break;
            }
            default: cout<<"you don't follow intruction"<<endl;
            cout<<"you didnt type in an s or an i"<<endl;
            return 1;
        }
    } else{ 
        cout<<"you don't follow instructions"<<endl;
        cout<<"values not between range given"<<endl;
        cout<<"no swap for you"<<endl;
        return 1;
    }
    
    //output the results for the swap
    //cout<<"old a = "<<b<<",new a = "<<a<<endl;
   // cout<<"old b = "<<a<<",new b = "<<b<<endl;
    //cout<< temp<< endl; scope / visibility error
    //cout<< type<< endl; scope / visibility error
    return 0;
}

