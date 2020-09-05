#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b;
    cin>>a>>b;
    
    string s;
    int z=a+b;
    s= to_string(z);
    int c=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        c+=6;
        if(s[i]=='1')
        c+=2;
        if(s[i]=='2')
        c+=5;
        if(s[i]=='3')
        c+=5;
        if(s[i]=='4')
        c+=4;
        if(s[i]=='5')
        c+=5;
        if(s[i]=='6')
        c+=6;
        if(s[i]=='7')
        c+=3;
        if(s[i]=='8')
        c+=7;
        if(s[i]=='9')
        c+=6;
        
    }
    cout<<c<<endl;
    }
    
}