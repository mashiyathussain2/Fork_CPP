#include<iostream>
using namespace std;
int main()
{    int h=5; 
char c='Z';
	int* v;
	v=&h;
	char *b;
	b=&c;
	//b=&h; //error1= cannot convert 'int*' to 'char*' in assignment
     	cout<<"h= "<<h<<endl<<"c= "<<c
	        <<"\n*v= "<<*v
		    <<"\n*b= "<<*b<<endl;
	cout<<"Address of h= "<<v<<"\naddress of c= "<<b;
	}
