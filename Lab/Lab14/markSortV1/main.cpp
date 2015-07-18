/* 
 * File:   main.cpp
 * Author: Jesus galeano
 *
 * Created on July 14, 2015, 12:10 PM
 * purpose: sort and array
 */

//system Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
//user libraries

//global constants

//function prototypes
void filAray(int [],int);
void prntAry(const int [],int, int);
void swap(int &, int &);
void swapMin(int [], int, int);
void markSort(int [], int);
int linsrch(int [], int, int);

//execution begins here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
//declare variables
    const int SIZE = 200;
    int array[SIZE];
    
    int nCols;
    //initialize
    filAray(array,SIZE);
    
    //output the initial array
     prntAry(array,SIZE,20);

     //process the inputs
     markSort(array,SIZE);
     
     // test the search routine
     int value = rand()%90+10;
     int pos = linsrch(array,SIZE,value);
     if(pos = -1){
         cout<<"value was not found"<<endl;
     }else{cout<<value<<" was found at array["<<pos<<"]!"<<endl;}
     cout<<endl;
         
    //output the results 
    prntAry(array,SIZE,20);
    
    
    //exit stage right
    return 0;
}
/******************************************************************************
 *                linear search
 ******************************************************************************
 * purpose: 
 *        to find where a value resides 
 * input:
 *       n-> SIZE of the array/list
 * a-> the integer array
 * val-> tthe value to search 
 * 
 * output:
 * positrion where cal was found      
 ******************************************************************************/
int linsrch(int a[], int n, int val){
    //loop until value is foujnd
    for(int i=0; i<n; i++){
        //report back if found
        if(a[i]==val)return i;
    }
    //if not found , then use sentinel
    return -1;
}

/******************************************************************************
 *                Mark Sort
 ******************************************************************************
 * purpose: 
 *         to to sort any integer array
 * input:
 *       n-> SIZE of the array/list
 * input - output:
 *       a-> the sorted integer array
 ******************************************************************************/
void markSort(int a[], int n){
    //loop and sort every position
    for(int pos=0; pos<n-1;pos++){
        swapMin(a,n,pos);
    }
}

/******************************************************************************
 *                SwapMin
 ******************************************************************************
 * purpose: 
 *         to place the minimum at the top of the list
 * input:
 *       a-> an integer array/list
 *       n-> SIZE of the array/list
 *       pos-> position to place the minimum
 * input - output:
 *       a-> an integer array/list
 ******************************************************************************/
void swapMin(int a[], int n, int pos){
    //loop through the entire list starting at pos +1
    for(int i = pos+1; i <n ; i++){
        //place smallest value at the position (pos)
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

/******************************************************************************
 *                Swap
 ******************************************************************************
 * purpose: 
 *         to swap by logical operation 2 values 
 * input - output:
 *       a-> an integer value
 *       b-> another integer value
 *       
 ******************************************************************************/
void swap(int &a, int &b){
    //perform the logical in place swap
    a=a^b;
    b=a^b;
    a=a^b;
}

/******************************************************************************
 *                PRINT ARRAY
 ******************************************************************************
 * purpose: 
 *         to print an integer array with any number of columns
 * input:
 *       n-> the size of the array
 *       a-> the integer array
 *       ncols-> number of colums to display the array
 * output:
 * on screen
 ******************************************************************************/
void prntAry(const int a[],int n, int nCols){
    
    //loop and output every element in the array
    for(int i = 0; i<n;i++){
        cout<<a[i]<<" ";
        //when colum is reached go to next line
        if(i%nCols == (nCols -1))cout<<endl;
    }
    cout<<endl;
    
}

/******************************************************************************
 *                FILL ARRAY!
 ******************************************************************************
 * purpose: 
 *         to fill an array with 2 digit random numbers 
 * input:
 *       n-> the size of the array
 * input - output:
 *                 a-> integer array
 * output:
 ******************************************************************************/
void filAray(int a[],int n){
    //looop on every element and equate to 2 digits 
    for(int i = 0; i < n; i++){
        a[i] = rand()%90+10;
    }
}