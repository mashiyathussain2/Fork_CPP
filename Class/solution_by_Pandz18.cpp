#include<iostream>
  using namespace std;

 /////DIFFERENT MATHEMATICAL OPERATIONS PROGRAM/////////
 class MATHS
 {
 private : int number1 , number2 , k , i, c=0;                 
  int sum=0 , prod , division , diff , fact1=1, fact2=1;  

  public : void INPUT(); void SUM(); void DIFF();  void PROD(); void DIV(); void FACT(); void DIVIS(); void PRIME();
           void CR(); void COMP();
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
  {      
                              //ex of factorial , let n=4 , 4! = 4x3x2x1= 24 
    for(int i =number1 ; i>0 ; i--)   //the for loop helps us to multiply each number from 1->n
    {
  	  fact1=fact1*i;      //remember to initialize variables that you'll be using in repetitive mulitplication as 1 and those of addition and subtraction as 0
    }  
                         //as the variables contain garbage values by default which won't change for the variable unless specified (ie , input or initialization)
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
  	 {                                                      //if a number is divisible by other there will be no remainder , hence we said "(max(number1,number2)%min(number,number2)==0" then to print it's divisible
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

    void MATHS :: CR()
    {
        int a , b;
        cout<<"Enter two values a and b";
        cin>>a>>b;

        cout<<"a is :"<<" "<<a;
        cout<<"b is :"<<" "<<b;

        cout<<"a after incrementation :"<<" "<<a++;
        cout<<"b after incrementation :"<<" "<<b++;

        cout<<"a after decrementation :"<<" "<<a--;
        cout<<"b after decrementation :"<<" "<<b--;
    
    }


 void MATHS :: COMP()
 {
     int NM1 , NM2;
     cout<<"Enter numbers ";
     cin>>NM1>>NM2;

     if(NM1>NM2)
     {
         cout<<NM1<<" "<<"is greater than"<<" "<<NM2;
     }
     else if (NM2>NM1)
     {
         cout<<NM1<<" "<<"is lesser than"<<" "<<NM2;
     }
     else
     {
         cout<<cout<<NM1<<" "<<"is equal to"<<" "<<NM2;
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
   private : int n , t,  a[20] , temp , A[100] , i ,  n1 , x , u , flag=0 , sum1=0 , B[100] , n2 ,  i2 , avg , C[10] , D[10] , E[10] ;
            float arr1[100]; 
            int arr[100], tot,  s ,  first[20], second[20], SUM[20], c;
   public : void SWAP(); void LSEARCH(); void EVOD(); void ARRSUM(); void ARRAVG(); void ARRLARG(); void ARRSMAl(); 
            void TWOARRSUM();  void ARRSPLIT(); void ARRCONC(); void ARRPOS(); void QUEUES();
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
   
 	for(u=0;u<n1;u++)
     {
         cin>>a[u];
     }
 		

 	cout<<"\nEnter element to search:";
 	cin>>x;

 	for(u=0;u<n1;++u)
 	{
 		if(a[u]==x)
 		{
 			flag=1;
 			
 		}
 	}

 	if(flag)
 		cout<<"\nElement is found at position "<<i+1;
 	else
 		cout<<"\nElement not found";
 	
         }


void ARRAYS :: EVOD()
 {
    
    cin>>n;

    if(n>0)
    {
        if(n%2==0)
        {
            for(i=2 ; i<=n ; i=i+2)
            {
                cout<<n<<" "<<"Even numbers :"<<" "<<i<<" ";
            }
        } else
        {
            for(i=3 ; i<=n ; i=i+2)
            {
                cout<<n<<" "<<"Odd numbers :"<<" "<<i<<" ";
            }
        }
    }
    else if(n<0)
    {
        if(n%2==0)
        {
            for(i=n ; i<=(-2) ; i=i+2)
            {
                cout<<i<<" ";
            }
        } else
        {
            for(i=(n+1) ; i<=(-2) ; i=i+2)
            {
                cout<<i<<" ";
            }
        }
    }
    else 
    {
        cout<<"invalid";
    }

    }
    

    void ARRAYS :: ARRSUM()
    {   int sum=0 , loop3;
        int L[10];
        cout<<"Enter number of array elements";
        cin>>n2;

        cout<<"Enter  array elements";
        
        for(loop3=0;loop3<n2;loop3++)
        {
            cin>>L[loop3];
        }


        for(i2=0;i2<n2;i2++)
        {
            sum=sum+L[i2];
        }
        cout<<"Sum of array :"<<" "<<sum;
    }



    void ARRAYS :: ARRAVG()
    {   
        int sum=0 , R[10] , loop4;
        cout<<"Enter number of array elements";
        cin>>n2;



        for(loop4=0;loop4<n2;loop4++)
        {
            cin>>R[loop4];
        }

        for(i2=0;i2<n2;i2++)
        {
            sum=sum+R[i2];
            avg=abs(sum/n2);
        }
        cout<<"Average of array :"<<" "<<avg;
    }

    void ARRAYS :: ARRLARG()
    {
    
    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;

    // Store number entered by the user
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    
    }

    cout << "Largest element = " << arr[0];
    }

    void ARRAYS :: ARRSMAl()
    {
     
    cout<<"Enter the Size for Array: ";
    cin>>tot;

    cout<<"Enter "<<tot<<" Array Elements: ";

    for(i=0; i<tot; i++)
    cin>>arr1[i];

    s = arr1[0];

    for(i=1; i<tot; i++)
    {
        if(s>arr1[i])
            s = arr1[i];
    }

    cout<<"\nSmallest Number = "<<s<<endl;

    }


void ARRAYS :: TWOARRSUM()
{      
  cout << "Enter the number of elements in the array ";
  cin >> n;

  cout << "Enter elements of first array" << endl;

  for (c = 0; c < n; c++)
    cin >> first[c];

  cout << "Enter elements of second array" << endl;

  for (c = 0; c < n; c++)
    cin >> second[c];

  cout << "Sum of elements of the arrays:" << endl;

  for (c = 0; c < n; c++) 
  {

    SUM[c] = first[c] + second[c];
    cout << SUM[c] << endl;
  
  }
    }

void ARRAYS :: ARRSPLIT()
{   
  
  cout<<"Enter number of elements in array";
  cin>>n;
  
  int mid=n/2;

  cout<<"Enter elements of array";
  
  for(i=1;i<=n;i++)
  {
      cin>>C[i];
  }

  if(n%2==0)
  {
      for(i=1;i<=mid;i++)
      {
         int left= D[i];
      }

      
      for(i=mid+1;i<=n;i++)
      {
         int right= E[i];
      }

        int d =sizeof(D[i]);
        int e =sizeof(E[i]);
      
      cout<<"First Array : ";
      for(i=1;i<=d;i++)
      {
          cout<<left;
      }

      cout<<"Second Array : ";
      for(i=1;i<=e;i++)
      {
          cout<<right;
      }
}
else 
{
    for(i=1;i<mid;i++)
      {
           int left = D[i];
      }

      
      for(i=mid+1;i<=n;i++)
      {
          int right =E[i];
      }

        int d =sizeof(D[i]);
        int e =sizeof(E[i]);
      
      cout<<"First Array : ";
      for(i=1;i<=d;i++)
      {
          cout<<D[i];
      }

      cout<<"Second Array : ";
      for(i=1;i<=e;i++)
      {
          cout<<E[i];
      }

      cout<<"Extra element : "<<mid<<endl;
}
}


void ARRAYS :: ARRCONC()
{

    int X[100] , Y[100] , i , n3 , n4;
    
    cout<<"Enter size of Array 1";
    cin>>n3;

    cout<<"Enter size of Array 2";
    cin>>n4;
    
    cout<<"Enter elemnts of Array 1";
    
    for(i=0;i<n1;i++)
    {
        cin>>X[100];
    }

     cout<<"Enter elemnts of Array 2";
    
    for(i=0;i<n1;i++)
    {
        cin>>Y[100];
    }
    
    int m = sizeof(X)/sizeof(X[0]);
    int n = sizeof(Y)/sizeof(Y[0]);
 
    int array1[m + n];

    for (int i = 0; i < m + n; i++)
     {
        if (i < m) 
        {
            array1[i] = X[i];
        }
        else 
        {
            array1[i] = Y[i - m];
        }
    }
 
    for (int i = 0; i < m + n; i++) 
    {
       cout << array1[i] << ' ';
    }
}

void ARRAYS :: ARRPOS()
{   
    int size , loop1 , Q[10] ;

    cout<<"Enter size of array";
    cin>>size;
    cout<<"Enter array elements";

    for(loop1=0;loop1<size;loop1++)
    {
        cin>>Q[loop1];
    }

         for(loop1=0;loop1<size;loop1++)
    {
        cout<<Q[loop1]<<" "<<"is found at"<<loop1<<"th position";
    }
}

void ARRAYS :: QUEUES()
{

int queue[100], n = 100, front = - 1, rear = - 1;
int ch;

   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;

      switch (ch) 
      {
        case 1:
         int val;

        if (rear == n - 1)
        cout<<"Queue Overflow"<<endl;
        
        else 
        {
        if (front == - 1)
        front = 0;

        cout<<"Insert the element in queue : "<<endl;
        cin>>val;
        rear++;
        queue[rear] = val;
        break;

        case 2: 

        if (front == - 1 || front > rear) 
        {
        cout<<"Queue Underflow ";
        } 
        else 
        {
        cout<<"Element deleted from queue is : "<< queue[front] <<endl;
         front++;;
         
         break;
        }

         case 3: 

         if (front == - 1)
         cout<<"Queue is empty"<<endl;
         else
        {
         cout<<"Queue elements are : ";
         for (int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
         cout<<endl;
         break;
       
         }
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      
      }
      }
   
   } while(ch!=4);

}


////

//OBJECTS
class OBJECTS
{
   private : int a , b, c;
   public : void POINT(); void STACKS();
};

void OBJECTS :: POINT()
{
   cout<<"Enter values of a , b , c";
   cin>>a>>b>>c;

    // print address of a
    cout << "Address of "<<" "<<a<<" :"<<" "<< &a << endl;

    // print address of var2
    cout << "Address of " <<" "<<a<<" :"<<" "<< &b << endl;

    // print address of var3
    cout << "Address of "<<" "<<a<<" :"<<" "<< &b << endl;
}

void OBJECTS :: STACKS()
{  
     int stack[100], n=100, top=-1;
    int ch, val;

   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) 
      {
         case 1: 
         {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else 
   {
      top++;
      stack[top]=val;
            break;
         }
         }
         case 2: 
         {
           if(top<=-1)
           {
                cout<<"Stack Underflow"<<endl;
           }
  
        else 
        {

      cout<<"The popped element is "<< stack[top] <<endl;
      top--;

            break;
         }

         case 3: 
         {
            if(top>=0)
             {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   }
    else
   {
       cout<<"Stack is empty";
            break;
   }
    }
         case 4: 
         {
            cout<<"Exit"<<endl;
            break;
         }
         default: 
         {
            cout<<"Invalid Choice"<<endl;
         }
      }
      }
   } while(ch!=4);
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
  	 M.FACT();
  	 M.DIVIS();
     M.PRIME();
     M.CR();
     M.COMP();

 ///HELLO WORLD
   HELLO H;
   H.WORLD();

//Arrays Programs

 ARRAYS A;
 A.SWAP();
 A.EVOD();
 A.ARRSUM();
 A.ARRAVG();
 A.ARRLARG();
 A.ARRSMAl();
 A.TWOARRSUM();
 A.ARRSPLIT();
 A.ARRCONC();
 A.LSEARCH();
 A.ARRPOS();
 A.QUEUES();
 //Objects Programs
 OBJECTS O;
 O.POINT();
 O.STACKS();
 
return 0;
   }
