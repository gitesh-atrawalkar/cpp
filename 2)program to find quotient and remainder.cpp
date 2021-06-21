//program to find quotient and remainder

#include<iostream>

using namespace std;

int main(){     
        int quotient, remainder, dividend, divisor;
        cout<<"enter the dividend and divisor respectively"<<endl; 
        cin>>dividend>>divisor;              //taking input from user
        
        quotient = dividend/divisor;        //formula
        remainder = dividend % divisor;
    
        cout<<"the quotient is "<<quotient<<endl<<"the remainder is "<<remainder;
        
        
    return 0;
}
