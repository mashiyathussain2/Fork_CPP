#include<iostream>
using namespace std;

	int r,c;
    void printMat(char input[][50]){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<input[i][j];
            }
            cout<<endl;
        }
    }
    // w,n,e,s
	int dx[4]={-1,0,1,0};
	int dy[4]={0,-1,0,1};

//ch is the character to be replaced.
//colour is the character to be added/
void flood_fill(char mat[][50],int i, int j, char ch, char color)
{
	//BASE CASE- matrix Bounds
	if(i<0 || j<0 || i>=r || j>=c)
	{
		return;
	}
	//BOUNDARY CONDITION

	if(mat[i][j]!=ch)
	{
		return ;
	}

	//Recursive Call
	mat[i][j]=color;
	for(int k=0;k<4;k++)
	{
		flood_fill(mat,i+dx[k],j+dy[k],ch,color);
	}
}
int main()
{
	cin>>r>>c;

	char input[15][50];

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>input[i][j];
		}
	}
    //flood_fill(input,5,10,'.','r');
    //printMat(input);

	flood_fill(input, 5 , 0 , '.', 'r');

	printMat(input);


	return 0;
}
