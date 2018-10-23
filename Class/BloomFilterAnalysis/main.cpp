/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 23rd,2018 9:07 AM
 * Purpose: Random Sum
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float eKMReg(int,float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=365;//Days in the year
    int bitVec[SIZE];
    
    //Input or initialize values Here
    for(int i=0;i<SIZE;i++){
        bitVec[i]=0;
    }
    
    //Process/Calculations Here
    int k=4;//4 hashes
    int m=7;//7 Elements in the dictionary
    for(int i=0;i<k*m;i++){
        int rnd=rand()%SIZE;//[0,364]
        bitVec[rnd]=1;
    }
    
    //Sum the bit-vector
    int sum=0;
    for(int i=0;i<SIZE;i++){
        sum+=bitVec[i];
    }
    //Predicted sum
    float c=1-1.0f/SIZE;
    float eKM=SIZE*(1-pow(c,k*m));
    
    //Output Located Here
    cout<<"Number of Hashes = "<<k<<endl;
    cout<<"Number of elements in dictionary = "<<m<<endl;
    cout<<"Sum random set = "<<sum<<endl;
    cout<<"Predicted Sum = "<<eKM<<endl;
    cout<<"Recursion Call = "<<eKMReg(k*m,c)<<endl;
    

    //Exit
    return 0;
}

float eKMReg(int n,float c){
    //Base Case
    if(n==0)return 0;
    if(n==1)return 1;
    //Recursive Case
    return c*eKMReg(n-1,c)+1;
}