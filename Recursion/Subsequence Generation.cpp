```
I/P:- abc
O/P:- abc ab ac a bc b c  
```



#include<iostream>
using namespace std;

void generator_subsequence(char *inn, char *out, int i, int j){
    if(inn[i] == '\0'){
        out[j] = '\0';
        cout<<out<<" ";
        return;
    }
    out[j] = inn[i];
    generator_subsequence(inn, out, i+1, j+1);
    generator_subsequence(inn, out, i+1, j);
}

int main(){
    char input[] = "abc";
    char output[10];
    generator_subsequence(input, output, 0,0);
}
