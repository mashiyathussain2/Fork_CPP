#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream reading("C:/Users/zohaib hassan/Desktop/tuesday/filing/zhs.txt");
	char data[200];
	while(!reading.eof())                 //or while(reading
	{
		reading.getline(data,200);
		cout<<data;
	}
	
}
/* line by line reading:
 string line;
 while(getline(reading,line));
 or
 //or while(reading
 
 or
 	reading.read(data,200);
 	reading.getline(data,sizeof(data);
	 */
	 
	 
	 /*
	 word by word searching:
	 
	 string word;
	 ifstream readiing("D:....")
	 while(reading>>word)
	 {
	 if(word=="stored")
	 { 
	 cout<<word<<endl;  
	 break;
	 }
     }
	 
	 reading.good()      //good returns 1 when file is not ended and 0 when file is ended;
	 
	 
	 
	  */
