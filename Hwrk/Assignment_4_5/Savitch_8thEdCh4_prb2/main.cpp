/* 
 * File:   main.cpp
 * Author: Jesus Galeano
 *
 * Created on July 10, 2015, 6:13 PM
 * Purpose: home work compare mpg of 2 cars
 */
//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries 

//global constants 
const float gasLtrs = 0.264179f; //0.264179 liters is = to 1 gallon.

//function prototypes
float mpgCar1(float, float); //Miles per gallon
float mpgCar2(float, float); //Miles per gallon

//execution begins here
int main(int argc, char** argv) {
//declare Variables
    //1 gallon = 3.785 liters
    float ltrsCar1;// input for how many liters of gas consumed by car
    float ltrsCar2;// input for how many liters of gas consumed by car
    float mileCar1; //input for how many miles traveled
    float mileCar2; //input for how many miles traveled
    float gasCar1; // liter converted to gallons of gas
    float gasCar2; //liter converted to gallons of gas
    char answer; // input to re run the program
    
    do{
    //prompt user, ask how many liters consumed and miles traveled for car 1
    cout<<" hello user we will compare the MPG of 2 cars"<<endl;
    cout<<" hello user how many liters of gas did car 1 consume"<<endl;
    cin>>ltrsCar1;
    
    cout<<"how many miles did Car 1 travel?"<<endl;
    cin>>mileCar1;
    
  //prompt user, ask how many liters consumed and miles traveled for car 1
    cout<<" hello user how many liters of gas did car 2 consume"<<endl;
    cin>>ltrsCar2;
    
    cout<<"how many miles did Car 1 travel?"<<endl;
    cin>>mileCar2;
    
    //calculate 
    //liters to gallons 
    gasCar1 =  ltrsCar1 * gasLtrs ;
    gasCar2 =  ltrsCar2 * gasLtrs ;
    //output results for car 1
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Car 1 gets "<<mpgCar1(ltrsCar1,mileCar1)<< " Miles Per Gallon(MPG)"<<endl;
    cout<<"liters to gallons: "<<ltrsCar1<<" liters"<<" is "<< gasCar1<<" gallons"<<endl;
    
    //SPACE
    cout<<endl;
    
    //output results for car 1
    cout<<"Car 2 gets "<<mpgCar2(ltrsCar2,mileCar2)<< " Miles Per Gallon(MPG)"<<endl;
    cout<<"liters to gallons: "<<ltrsCar2<<" liters"<<" is "<< gasCar2<<" gallons"<<endl;
    
    //SPACE
    cout<<endl;
    
    //output which car has better MPG
    if(mpgCar1 > mpgCar2){
        cout<<"CAR 1 is the winner with better MPG"<<endl;
    }else{
        cout<<"CAR 2 is the winner with better MPG"<<endl;
    }
    
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
 ***************** MPG CAR1   *************************
 ******************************************************
 * Purpose:  calculate Miles per gallon
 * Input:
 *      liters and miles traveled. liter will be converted to gallons
 * Output:
 *    miles per gallon for the 1st car
 */
float mpgCar1(float liters, float miles){
    float milespg = miles/(liters * gasLtrs);
    return milespg;
}
    
/******************************************************
 ***************** MPG CAR2   *************************
 ******************************************************
 * Purpose:  calculate Miles per gallon
 * Input:
 *      liters and miles traveled. liter will be converted to gallons
 * Output:
 *    miles per gallon for the 2nd car
 */
float mpgCar2(float liters, float miles){
    float milespg = miles/(liters * gasLtrs);
    return milespg;
    
}