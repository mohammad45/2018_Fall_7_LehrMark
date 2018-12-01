/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on November 15, 2018, 8:27 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

const unsigned int MAXRND=pow(2,31);

float randNum();
bool prob(float);

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    float mx,mn;
    
    
    //Test out the random function
    int number=0;
    int nLoops=1000000000;
    for(int i=1;i<nLoops;i++){
        number+=(prob(0.88)&&prob(0.99)&&prob(0.87));
    }
    cout<<"Percentage = "<<100.0*number/nLoops<<endl;

    return 0;
}

bool prob(float possible){
    float temp=randNum();
    if(temp<possible)return true;
    return false;
}

float randNum(){
    return static_cast<float>(rand())/MAXRND;
}
