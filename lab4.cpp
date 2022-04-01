//This is a programm to accept the current temperature and display the message 
#include<iostream>  //This is the directive for input out stream
using namespace std;  //Using standard namespace 
int main()//main function 
{          //open the main 
    int temp;
    cout<<"Enter Temperature: ";    //Ask user to put the number 
    cin>>temp;  
    if (temp >=41 && temp <=54)       //This block of code is to limit the number from 41 to 54
    {
        cout<<"Stay hydrated!"<<endl;
    }
    else if(temp>=32 && temp<=40 )       //This block of code is to limit the number from 32 to 40
    {
        cout<<"Stay Cool and safe"<<endl;
    }
    else if ( temp>=26 && temp<=31 )      //This block of code is to limit the number from from 26 to 31
    {
        cout<<"Keep a sunblock handy!"<<endl; 
    }
    else if (temp>=20 and temp<=25)      //This block of code is to limit the number from 20 to 25
    {
        cout<<"Always keep your cool!"<<endl;
    }
    else        //This block of code is the number from 20 to below that 
    {
        cout<<"cool breeze in the air!"<<endl;
    }    
}       //close to main function block  
hw 1 
int a,b,c,sum,avg,pro;
	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	cout<<"Enter Third Number: ";
	cin>>c;
	sum=a+b+c;
	cout<<"The sum of "<< a << "," << b <<" and "<< c << " is "<< sum <<endl;
	avg=sum/3;
	cout<<"The average of "<< a <<","<< b <<" and "<< c << " is "<< avg <<endl;
	pro=a*b*c;
	cout<<"The product of "<< a <<","<< b <<" and "<< c << " is "<< pro <<endl;
	return 0;

 hw2
 #define PI 3.14 // put in a name for constant variable
	float radius,area,circumference; // Declare variebles
	cout<<"Enter radius: "; // ask the user to enter a number
	cin>> radius; // accept a number and store in radius
	area= PI*radius*radius; // formula for area of circle
	cout<<"The area of the circle is: "<<area<<endl; // Display the area of the circle
	circumference= 2*PI*radius;// formula for circumference of circle
	cout<<"The circumference of the circle is: " <<circumference;// Display the area of the circumference
hw 2
float celsius,kelvin,fahrenheit; // Declare variebles
	cout<<"Enter degrees in Celsius: "; // ask the user to enter a number
	cin>> celsius; // accept a number and store in celsius
	kelvin= celsius+273; // formula C to K
	cout<<"The value of " <<celsius<< " degrees C in K is: "<<kelvin<<endl; // Display kelvin value
	fahrenheit= 9/5*celsius+32; // formula C to F
	cout<<"The value of " <<celsius<< " degrees C in F is: "<<fahrenheit; // Display fahrenheit value



