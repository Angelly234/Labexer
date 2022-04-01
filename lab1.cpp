#include<iostream>
using namespace std;
int main(){
   int x,y,z,sum,average,produce;
    cout<<"Enter your first number:  ";
    cin>>x;
    cout<<"Enter your second number: ";
    cin>>y;
    cout<<"Enter your third number: ";
    cin>>z;
    sum=x+y+z;
    average=sum/3;
    produce=(x*y*z);
    cout<<"The sum of "<<x<<" , "<<y<<" , "<<"and "<<z<<" is "<<sum <<"."<<endl;
    cout<<"The average of "<<x<<" , "<<y<<" , "<<"and "<<z<<" is "<<average <<"."<<endl;
    cout<<"The produce of "<<x<<" , "<<y<<" , "<<"and "<<z<<" is "<<produce <<"."<<endl;
    return 0; 
}