//This is a programm written by HEADANGELLY HUY 
#include<iostream> 
using namespace std ;
int main () 
{ 
   int A=0, B=0, C=0, D=0, F=0; 
   int score,total;
    cout <<"Enter Exam Scores: ";
    for ( int i=0;;i++) 
	{
     cin>> score; 
        if (score<0) 
	    {
           break;
        } 
        else if ( score > 100 or !score) //Conditions
		{
           cout<< " Out of Range,  Please Try AGIAN! "<<endl; //Display Massage
        }
        else if ( score >=90 && score <= 100) //Conditions
		{  
           A++;
         
        } 
        else if ( score >=80 && score <=89) //Conditions
		{ 
           B++;
        } 
        else if ( score >=70 && score <= 79) //Conditions
		{ 
           C++;
        }
        else if ( score >=60 && score <= 69) //Conditions
		{ 
           D++;
          
        }  
		else if (score >=0 && score <= 59) //Conditions
		{  
          F++;
        } 
    }
    cout<< "   Number of A's: " << A << endl; // Display the total amount of A
    cout<< "   Number of B's: " << B << endl; // Display the total amount of B
    cout<< "   Number of C's: " << C << endl; // Display the total amount of C
    cout<< "   Number of D's: " << D << endl; // Display the total amount of D
    cout<< "   Number of F's: " << F << endl; // Display the total amount of F
    total= A+B+C+D+F;
    cout<<"   Total Number of Scores: "<<total<<endl;

    return 0; //return to the OS
} //Close Main function

