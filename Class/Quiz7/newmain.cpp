/* 
 * Dr. Mark E. Lehr
 * November 1st, 2018
 * Quiz 7 Simulated
 */

//System Libraries
#include <iomanip>  //Formatting
#include <iostream> //I/0
#include <cmath>    //Math
using namespace std;

//Recursive Function Prototypes
int fact(int);      //Recursive Factorial Function
int bcoef(int,int); //Recursive Binomial Coefficient Function


int main(int argc, char** argv) {
    //Problem 1
    int sum=0;
    for(int i=100;i<=1000;i+=3){
        sum+=i;
    }
    cout<<endl<<"Solution to Problem 1"<<endl;
    cout<<sum<<"="<<301*550<<endl;
    //Problem 2
    sum=0;
    for(int i=3;i<=9;i+=1){
        sum+=pow(2,i);
    }
    cout<<endl<<"Solution to Problem 2"<<endl;
    cout<<sum<<"="<<pow(2,10)-pow(2,3)<<endl;
    //Problem 3
    float a=2e6f,b=1.5e6f;
    float ar=1.0f/6.0f*pow(10,6);
    float br=1.12f;
    cout<<endl<<"Solution to Problem 3"<<endl;
    for(int i=0;i<=11;i+=1){
        cout<<setw(2)<<i<<" "<<setw(15)<<a<<" "<<setw(15)<<b<<endl;
        a+=ar;
        b*=br;
    }
    cout<<endl<<"Solution to Problem 3"<<endl;
    for(int i=0;i<=11;i+=1){
        a=2e6f,b=1.5e6f;
        a+=(i*ar);
        b*=pow(br,i);
        cout<<setw(2)<<i<<" "<<setw(15)<<a<<" "<<setw(15)<<b<<endl;
    }
    //Problem 4
    cout<<endl<<"Solution to Problem 4"<<endl;
    cout<<bcoef(5,2)<<"="<<fact(5)/fact(5-2)/fact(2)<<endl;
   
    return 0;
}

//Recursive Factorial Function
int fact(int n){
    if(n<=1)return 1;
    return n*fact(n-1);
}
//Recursive Binary Coefficient Function
int bcoef(int n,int m){
    if(n==m)return 1;
    if(m==0)return 1;
    return bcoef(n-1,m-1)+bcoef(n-1,m);
}