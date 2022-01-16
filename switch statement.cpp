#include<iostream>
using namespace std;
int main()
{ int a;
cout<<"enter any integer =";
cin>>a;
 switch(a)
 {   case 60:
     case 50:       
//	  if cases r not identified in input then default will be executed.
     case 40: 
	 cout<<"A grade";
	 break;
	 case 30:
	 case 20:
	 	cout<<"D grade.";
	 	break;
	 default:
	 cout<<"Any other grade than \"A\" or \"D\"";
	 }
     
     
 }
