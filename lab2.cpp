//This programm written by Huy HeadAngelly
//C++ program to calculate area and circumference of the circle 
#include<iostream>      //This is the directive for input out stream
using namespace std;    //Using standard namespace 
#define PI 3.14         // defind that PI is 3.14                    
int main()          //main function 
{                       //open the main function block
float radius ,area,circumference; //declare variables 
cout<<"Enter radius: "; //ask user to enter a number
cin>>radius;        //accept a number and store in radius 

area=PI*radius*radius;     //calculate area 
circumference=2*PI*radius; //and circumference

cout<<"The area of the circle is: "<<area<<endl; //print: The area of the cirlce is__
cout<<"The circumference of the circle is: "<<circumference<<endl;//print: The circumference of the circle is __
return 0;      //return non-error code to the system
}          //close to main function block 