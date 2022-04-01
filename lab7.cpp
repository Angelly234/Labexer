
#include<iostream>
using namespace std;
void Labour_2()
{    char choice;
     do
    {   cout<<endl;
        cout<<"-------------------------------------------------------------------------------"<<endl;
        cout<<"SELECT PROGRAMS"<<endl;
        cout<<"[1]Circumference and Area"<<endl;
        cout<<"[2]Temper Conversaion "<<endl;
        cout<<"[B]Go back to the main menu"<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        
       switch(choice)
        {   
            case '1':
            #define PI 3.14         // defind that PI is 3.14                    
                {                       //open the main function block
                    float radius ,area,circumference; //declare variables 
                    cout<<"Enter radius: "; //ask user to enter a number
                    cin>>radius;        //accept a number and store in radius 
                    area=PI*radius*radius;     //calculate area 
                    circumference=2*PI*radius; //and circumference
                    cout<<"The area of the circle is: "<<area<<endl; //print: The area of the cirlce is__
                    cout<<"The circumference of the circle is: "<<circumference<<endl;//print: The circumference of the circle is __
                    break ; 
                
                                    
                }      
            case '2':
                {                     // the main function block
                    float celsius,kelvin,fahrenheit;    //declare variables 
                    cout<<"Enter degree in Celsius is: "; //ask user to enter a number
                    cin>>celsius;                 //accept a number and store in celsius            
                    kelvin=celsius+273;             //convert celsius into kelvin
                    fahrenheit=9/5*celsius+32;      //convert celsius into farenheit 
                    cout<<"The value of "<<celsius<<" degree C in K is: "<<kelvin<<endl;   
                    cout<<"The value of "<<celsius<<" degree C in F is: "<<fahrenheit<<endl;
                    break;
                }
            case 'B':
                int main;
                break; 
        }                
    } while(choice !='B');
   
}

int main()
{   char n;
    
    do   
    {   cout<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------"<<endl; 
        cout<<"MAIN MENU : Select Laboratory Activity"<<endl;
        cout<<"[1]On Arithmetic Operators and Keyboard Input"<<endl;
        cout<<"[2]Finding Radius And Tempurature"<<endl;
        cout<<"[3]On Print Name"<<endl;
        cout<<"[4]On Display Tempurature Massage"<<endl;
        cout<<"[5]On Prime and Composite numbers"<<endl;
        cout<<"[6]On Exam Score"<<endl;
        cout<<"[x]Exit"<<endl;
        cout<<"Your Choice: ";
        cin>>n;
        switch(n)
        {   
            case '1':
            {   int sum,average,produce;
                int x,y,z;
                cout<<"Enter your first number: ";
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
                break ;
            }
            case '2':
                Labour_2();
                break;    
            case '3':
            {   cout<<"[1]On Arithmetic Operators and Keyboard Input"<<endl;
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
                else 
                {
                    for(int i=1;i<=5 ; i++)   
                    cout<<i<<"."<<name<<endl; 
                } 
                break;
            } 
            case '4':
            {  
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
                break;    
            }   
            case '5':
                    
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
                     break;
                    } 
            case '6':
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
                break;    
                }
                    cout<< "   Number of A's: " << A << endl; // Display the total amount of A
                    cout<< "   Number of B's: " << B << endl; // Display the total amount of B
                    cout<< "   Number of C's: " << C << endl; // Display the total amount of C
                    cout<< "   Number of D's: " << D << endl; // Display the total amount of D
                    cout<< "   Number of F's: " << F << endl; // Display the total amount of F
                    total= A+B+C+D+F;
                    cout<<"   Total Number of Scores: "<<total<<endl;
                
            }
            case 'x':
            break;

        }

    }while(n !='x');
}   


