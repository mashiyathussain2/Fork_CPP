#include<iostream>
#include<algorithm>
using namespace std;
int point_x[40000+10], point_y[40000+10];
int main(){
int t,w,h,n,x,y;
scanf("%d",&t);
while(t--){
scanf("%d %d %d",&w,&h,&n);
for(int i = 0;i<n;i++){
scanf("%d %d",&point_x[i],&point_y[i]);
}
//sort the x-coordinates of the list
sort(point_x, point_x + n);
//sort the y-coordinates of the list
sort(point_y, point_y + n);
//dx --> maximum uncovered tiles in x coordinate
//dy --> maximum uncocered tiles in y coordinate
//Initially dx and dy are the first guars's posit
int dx = point_x[0],dy = point_y[0];
//calculate the maximum uncovered gap
//in x and y coordinate
for(int i = 1;i<n;i++){
dx = max(dx,point_x[i] - point_x[i-1]);
dy = max(dy,point_y[i] - point_y[i-1]);
}
dx = max(dx, w + 1 - point_x[n-1]);
dy = max(dy, h + 1 - point_y[n-1]);
printf("%d\n",((dx-1) * (dy-1)));
}
return 0;
}
