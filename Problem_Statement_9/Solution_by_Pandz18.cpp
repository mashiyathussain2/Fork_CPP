int pad(int n) 
 { 

     int prevprev = 1, prev = 1, curr = 1, next = 1; 

     for (int i=3; i<=n; i++) 
     { 
         next = prevprev + prev; 
         prevprev = rev; 
         rev = curr; 
         curr = next; 
     } 

     return next; 
 } 


 int main() 
 { 
     cin>>"Enter the position ";
   cin>>n;
     cout << pad(n); 
     return 0; 
 } 
