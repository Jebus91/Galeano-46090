/* 
 * File:   main.cpp
 * Author: Jesus Galeano    
 *
 * Created on July 5, 2015, 7:04 PM
 * purpose: Homework
 */


#include <cstdlib>
#include <iostream>

using namespace std;
//user libraries 

//global constants 

//function prototypes

//execution beigins here

int main(int argc, char** argv) {
//declare Varaibles 
    float item;
    float inflation = .056;
    float year;
    char answer;
    
    do{
    //prompt user
    cout<<"how much does your item cost now?: "<<endl;
    cin>>item;
    
    cout<<"you would like to know the cost of you item in how many years from now?"<<endl;
    cin>>year;
    
    for(int x = 0; x <= year;x++ ){
        item = (item * inflation) + item;              
    }
   cout<<" after: "<<year<<" years item is estimated to cost: ";
   cout<<item<<" $"<<endl;
   
   
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

