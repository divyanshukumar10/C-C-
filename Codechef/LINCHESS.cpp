#include <iostream>
using namespace std;

int main()
{
    int t,n,count;
    long k;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>k;
        long arr[n];
        long max=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(k%arr[i]==0)
        {
            count++;
            if(max<arr[i])
            max=arr[i];
        }
    }
    if(count==0)
    cout<<"-1"<<endl;
    else
    cout<<max<<endl;
    }
    
}