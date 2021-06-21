
/*1)program to print positive number entered by user 
 if the user enters the negative numbers it prints the number is negative*/

#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;        //taking inputs from user

    if(number>0) //excute only positive numbers
        {cout<<"the given number "<<number<<" is positive";}
    
    else        //shows that number is negative
    
        {cout<<"you have entered negative number";}
    return 0;
    
