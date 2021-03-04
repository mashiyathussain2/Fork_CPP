#include<iostream>
 using namespace std;

/////DIFFERENT MATHEMATICAL OPERATIONS PROGRAM/////////
class MATHS
{
private : int number1 , number2 , k , c=0;                 
 int sum=0 , prod , division , diff , fact1=1, fact2=1;  

 public : void INPUT(); void SUM(); void DIFF();  void PROD(); void DIV(); void FACT(); void DIVIS(); void PRIME();

};
void  MATHS :: INPUT() //the function INPUT is a function through which the user inputs two values as number1 and number2 using the input operator '>>'
 {
 	cout<<"enter two integer numbers"<<endl; //the \n takes the cursor to the next line after the current is executed 
 	 cin>>number1>>number2;
 }
 void  MATHS :: SUM()        //the function SUM is a function in which we will calulate the sum of input using the '+' operator 
 {
 	sum=number1+number2;
 	cout<<"Sum of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<sum<<endl;
 }

 void  MATHS :: DIFF() //the function DIFF is a function through which we will find the difference of the two inputs depending on which is larger using the '-' operator
 {
    //we use the if-else statement to calulate the difference of the two input by first comparing the two and finding which is larger using'<' or'>'
   diff=(max(number1,number2))-(min(number1,number2));
  cout<<"Difference of "<<" "<<(max(number1,number2))<<" "<<"and"<<" "<<(min(number1,number2))<<" "<<"is :" <<diff<<endl;

 }

 void  MATHS :: PROD() //the function PROD is used to find the product of two functions by using the '*' operator 
 {
 	prod=number1*number2;
 	 cout<<"Product of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<prod<<endl;
 }

 void  MATHS :: DIV() //the function DIV is a function through which we will find the quotient on dividing the two inputs after checking which is larger using the '/' operator
 {

 	 division=(max(number1,number2))/(min(number1,number2));
 	 cout<<"Division of "<<" "<<(max(number1,number2))<<" "<<"by"<<" "<<(min(number1,number2))<<" "<<"is :" <<division<<endl;
  
 }

 void  MATHS :: FACT()     //the function FACT is used to find the factorials of the two numbers seperately by using for loopss
 {               //ex of factorial , let n=4 , 4! = 4x3x2x1= 24 
   for(int i =number1 ; i>0 ; i--)   //the for loop helps us to multiply each number from 1->n
   {
 	  fact1=fact1*i;      //remember to initialize variables that you'll be using in repetitive mulitplication as 1 and those of addition and subtraction as 0
   }                       //as the variables contain garbage values by default which won't change for the variable unless specified (ie , input or initialization)
  for(int j =number2; j>0 ;j--)
   {
 	  fact2=fact2*j;
   }
  cout<<"Factorial of "<<" "<<number1<<" "<<" is "<<" "<<fact1<<endl;
  cout<<"Factorial of "<<" "<<number2<<" "<<" is "<<" "<<fact2<<endl;
 }

 void  MATHS :: DIVIS() //the function DIVIS is used to check if either input values are divisible by one another again after checking on which is greater
 {
 	 if((max(number1,number2))%(min(number1,number2))==0)   //we use the '%' operator as it gives us the remainder of the function while '/' gives us the quotient 
 	 {              //if a number is divisible by other there will be no remainder , hence we said "(max(number1,number2)%min(number,number2)==0" then to print it's divisible
 		cout<<max(number1,number2)<<" "<<"is divisible by"<<" "<<min(number1,number2)<<endl;
    }
    else
  {
 	 cout<<"Neither numbers are divisible by one another "<<endl;
  }
 }

void  MATHS :: PRIME()
{
  for (k = 1; k <= number1; k++)
    {
        if (number1 % k == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout <<number1<<" "<<" is a Prime number" << endl;
    }
    else
    {
         cout <<number1<<" "<<" is not a Prime number" << endl;
    }

    for (k = 1; k <= number2; k++)
    {
        if (number2 % k == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout <<number2<<" "<<" is a Prime number" << endl;
    }
    else
    {
         cout <<number2<<" "<<" is not a Prime number" << endl;
    }

}

//////////////////////////////////

//Hello world/////
class HELLO
{
  public : void WORLD();
};

void HELLO::WORLD()
{
    cout<<"Hello World"<<endl;
}
///////////////////////////////////

///ARRAY PROGRAMS///
class ARRAYS 
{
  private : int n , t, temp , A[100] , int a[20] , n1 , x , u , flag=0;
  public : void SWAP(); void LSEARCH();
};
void ARRAYS::SWAP()
{
   cout<<"Enter number of elements in the array";
   cin>>n;
   for(t=0;t<n;t++)
   {
        cin>>A[t];
   }
    for(t=0;t<n;t++)
    {       
            if(A[t]>A[t+1])
            swap(A[t], A[t+1]);

    }
for(t=0;t<n;t++)
    {       
      cout<<A[t]<<" ";

    }
} 

void ARRAYS :: LSEARCH()
{
	
	cout<<"How many elements?";
	cin>>n;
	cout<<"\nEnter elements of the array\n";
	
	for(u=0;u<n1;++u)
		cin>>a[u];
	
	cout<<"\nEnter element to search:";
	cin>>x;
	
	for(u=0;u<n1;++u)
	{
		if(a[u]==x)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
		cout<<"\nElement is found at position "<<i+1;
	else
		cout<<"\nElement not found";
		}

 int main()
 { 
  //the functions mentioned in the main will be executed in order starting from INPUT and ending at DIVIS 
 	 MATHS M; 
   M.INPUT();            
 	 M.SUM();
 	 M.DIFF();
 	 M.PROD();
 	 M.DIV();
 	 M.PERM();
 	 M.DIVIS();
   M.PRIME();
   
///HELLO WORLD
  HELLO H;
  H.WORLD();

//Arrays Programs
ARRAYS A;
A.SWAP();
A.LSEARCH();
  
 	return 0;
  }
