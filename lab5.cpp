//
#include<iostream> //This is the directive for input out stream
using namespace std; //Using standard namespace 
int main() //main function 
{          //open the main

  int i, num;   //ask user to input a number 
  cout << "Enter a number: "; //ask user to intput number
  cin >> num;     //accept a number and stored in n
   for (i = 1; i <= num; i++)
   {
     if (num %i == 0) 
        { 
          cout << i <<;
        }
   }
  return 0;   //return non-error code to the system
}  //close to main function block  

