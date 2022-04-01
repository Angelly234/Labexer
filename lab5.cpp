//This is a programm written by HEADANGELLY HUY
#include<iostream> //This is the directive for input out stream
using namespace std; //Using standard namespace 
int main() //main function 
{          //open the main
   
 
  int j,i, num;   //ask user to input a number 
  int countprime=0;
  cout << "Enter a number: "; //ask user to intput number
  cin >> num;     //accept a number and stored in n
  for(j=1 ; j<=num; j++)
  {
    if(num %j==0)
    {
      countprime++;
    }
  }
  if(countprime==2)
  {
    cout<<num<<" is a prime number!"<<endl;
  }
  else 
  {
    cout<<num<<" is a composite numberr!"<<endl;
   cout<<"The factors of "<< num << " are "; 
   for (i = 1; i <= num; i++)
   {
     if (num %i == 0) 
        { 
          cout << i <<" ";
        }
   }
  } 
  return 0;   //return non-error code to the system
}  //close to main function block







