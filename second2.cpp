//This programm written by Huy HeadAngelly
//This is a program to convert Cellsius to kelvin and fahrenheit
#include<iostream>     //This is the directive for input out stream
using namespace std;   //Using standard namespace 
int main()             //main function 
{                     // the main function block
float celsius,kelvin,fahrenheit;    //declare variables 
cout<<"Enter degree in Celsius is: "; //ask user to enter a number
cin>>celsius;                 //accept a number and store in celsius            

kelvin=celsius+273;             //convert celsius into kelvin
fahrenheit=9/5*celsius+32;      //convert celsius into farenheit 

cout<<"The value of "<<celsius<<" degree C in K is: "<<kelvin<<endl;    //print: The value of__degree c in k is__
cout<<"The value of "<<celsius<<" degree C in F is: "<<fahrenheit<<endl;//print: The value of__degree c and F  is__
return 0;     //return non-error code to the system
}        //close the main function block