#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        int q=sqrt(n);
        n = n- (q*q);
        c++;
        
    }
    cout<<c<<endl;
    }
}