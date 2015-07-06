/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 4, 2015, 11:03 AM
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

// global constants 

// function prototypes 

// execution begins here 
int main(int argc, char** argv) {
//declare variables 
    
    float ASTKAM = 1  ; //amount of artificial sweetner to kill a mouse;
    float wt          ; // weight of person
    float goalWt = 160; //weight the person wants to be. 
    float mouseWt= 1.5; // weight of the mouse
    float ASTKAP      ; //amount of artificial sweetner to kill a person;
    char  answer      ;
    do{
    //output ask for weight input weight
    cout<<"hello user please input a weight in pounds(lbs) "<<endl;
    cin>>wt;
    
     //initialize 
    ASTKAP =(wt/.0022046)*0.667; //convert lbs to grams. 
    
    
   // promtpt user
    cout<<fixed << showpoint << setprecision(1);
    cout<<"it takes 1 gram of artificial sweeter to kill a mouse that weighs 1.5 grams"<<endl;

    // output and calculate how much sweetner it takes to kill a mouse in percent
    cout<<"that is "<<1/1.5*100<<" % of the mouse's weight worth of artificial sweetner"<<endl;
    
    //prompt user
    cout<<" a person wondering how much artificial sweetner it would take to kill";
            cout<<" a person, it would be 66.7% of the person weight."<<endl;
    cout<<" that is: "<<ASTKAP << " grams of sweetner it would take ";
    cout<<"or "<<(wt)*.667<<"(lbs)"<<endl;
            cout<<"to kill a person that weighs:" <<wt<<"(lbs)"<<endl;
      
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

