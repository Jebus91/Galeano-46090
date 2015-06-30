/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on June 29, 2015, 12:43 PM
 *purpose: to show the truth. 
 */

//system Libraries 
#include <cstdlib>
#include <iostream>


using namespace std;

// User Libraries 

// Global Constants 

// function prototypes 

//execution begins here.
 
int main(int argc, char** argv) {
    
    //declare variables 
    
    bool x, y;
    
//out put the heading of the table 
    cout<<"x, y, !x, !y, x&&y, x||y, x^y, (x^y)^y, (x^y)^x, !(x&&y), ";
    cout<<"!x||!y, !(x||y), !x&&!y."<<endl;
    
    //row 1 output
    x = true;y=true;
    cout<<(x?'T':'F') <<"  ";
    cout<<(y?'T':'F') <<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y ?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"        "<<endl;
    
    //row 2 output
    x = true;y=false;
    cout<<(x?'T':'F') <<"  ";
    cout<<(y?'T':'F') <<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y ?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"        "<<endl;
    
    //row 3 output
    x = false;y=true;
    cout<<(x?'T':'F') <<"  ";
    cout<<(y?'T':'F') <<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y ?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"        "<<endl;
    
    //row 4 output
      x = false;y=false;
    cout<<(x?'T':'F') <<"  ";
    cout<<(y?'T':'F') <<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y ?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"        "<<endl;
    
    
    return 0;
}

