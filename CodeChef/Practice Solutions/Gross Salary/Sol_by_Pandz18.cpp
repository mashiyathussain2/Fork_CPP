#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin>>i;
    
    for(int j=0;j<i;j++)
    {
        float basic_salary;
        cin>>basic_salary;
        float gross_salary;
        
        if(basic_salary<1500)
        {
            float hra = (basic_salary*10)/100;
            float da = (basic_salary*90)/100;
            gross_salary =  basic_salary + hra + da;
        }
        else if(basic_salary>= 1500)
        {
            float hra1 = 500;
            float da = (basic_salary*98)/100;
            gross_salary = basic_salary + hra1 + da;
        }
        cout<<setprecision(2)<<fixed<<gross_salary<<endl;
    }
    return 0;
}
