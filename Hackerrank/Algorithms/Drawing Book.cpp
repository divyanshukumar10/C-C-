#include <iostream>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int q=n/2;
    
    if(p==1 || p==n)
    cout<<"0"<<endl;
    
    else
    {
        if(p<=q)
        cout<<p/2<<endl;
        
        if(p>q)
        {
            if(p%2==0)
            cout<<(n-p)/2<<endl;
            else
            cout<<(n-p+1)/2<<endl;
        }
    }
    
    return 0;
}