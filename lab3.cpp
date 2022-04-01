//this programm written by HUY HEADANGELLY
//This is a programm to accept name .if age is even print name 10 times , if age is odd print name 5 times .
#include<iostream>
using namespace std;

int main() //main function 
{          //open the main 
     string name;
     int age;
     cout<<"Enter your age: "; //Ask user to fill theeir age in  
     cin>>age ;                 //accept a number and stored in age
     cout<<"Enter your name: "; //ask user to fill their name
     cin>>name;            //accpet a number and stored in name 
     if ( age %2 == 0)    //this block of code show if age is even
    {
        for(int i=1; i<=10 ; i ++)  //this block of code is to make  the name showing 10 times 
        {
            cout<<i<<"."<<name<<endl;   //print name 10 times 
        }
    }
    else //this block of code show if age is odd
    {
        for(int i=1;i<=5 ; i++)  ////this block of code is to make  the name showing 5 times 
        cout<<i<<"."<<name<<endl; //print name 5 time
    } 
}  //close to main function block  