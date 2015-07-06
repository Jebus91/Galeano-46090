/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 2, 2015, 11:03 AM
 * purpose: Homework generate the fibonachi sequence 
 * purpose: generate crud based on the fibonacci sequence 
 * 
 */

#include <cstdlib>
#include <iostream>

using namespace std;
// user libraries

//global constants 

// function prototypes 

// execution begins here 

int main(int argc, char** argv) {
// declare variables and initialize the members of the sequence 
    unsigned short fi =1, fip1=1, fip2;
    unsigned char terms = 10;
    float crudWt, nDays; 
    
    //print the intial conditions
    
    //cout<<"the number of terms in the fiboniacci sequence to show " 
    //        <<"to display is "<<terms<<endl;
   // cout<<"term "<<1<<" in the sequence = " <<fi<<endl;
   // cout<<"term "<<2<<" in the sequence = " <<fip1<<endl;
    
    cout<<"input the intial crud weight in lbs"<<endl;
    cin>>crudWt;
    cout<<"input the number of days allowed to grow "<<endl;
    cin>>nDays;
    
    // scale the nDays to the fibonacci sequence 
    terms = nDays/5+1; //scale by 5 days and start at a term =1; 
    
    //given the 3 conditions 
    if(terms==1){
        cout<<"the crud weight after "<<nDays<<" is = "<<crudWt<<"(lbs)"<<endl;
    }else if(terms==2){
         cout<<"the crud weight after "<<nDays<<" is = "<<crudWt<<"(lbs)"<<endl;
    }else{
   // loop and show the terms as you generate 
    for(unsigned char term = 3; term<=terms;term++){
        //calculate the next term in the sequence
        fip2=fi+fip1;
        
        // output the current term
        //cout<<"term "<<static_cast<int>(term)<<" in the sequence = "<<fip2<<endl;
        
        //now shift 
        fi =fip1;
        fip1=fip2;
    }
     cout<<"the crud weight after "<<nDays<<" is = "<<fip2*crudWt<<"(lbs)"<<endl;
    }
    return 0;
}

