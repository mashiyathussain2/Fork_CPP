#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while (t--) {
        
        long n;
        cin>>n;
        
        int last, first;
        
        last = n%10;
        
        while (n > 0) {
            
            first = n%10;
            
            n /= 10;
        }
        
        cout<<first+last<<endl;
        
    }
    
    
    
    return 0;
}
