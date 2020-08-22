#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        while(b>0 && c>0)
        {
            b=b-c;
            c=floor(c*1.0/2);
        if(b<=0)
        {
        cout<<"1"<<"\n";
        break;
        }
        if(c<=0)
        {
        cout<<"0"<<"\n";
        break;
        }
        }
    }
    
}