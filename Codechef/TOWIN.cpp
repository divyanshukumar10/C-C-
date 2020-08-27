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
    long arr[n]={0};
    long sum1=0,sum2=0;
    
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n, greater<int>()); 
    for(int i=0;i<n;i++)
    {
        if(i==0)
        sum1+=arr[i];
        if(i==1 || i==2)
        sum2+=arr[i];
        if(i>=3)
        {
            if(i%2!=0)
            sum1+=arr[i];
            if(i%2==0)
            sum2 +=arr[i];
        }
        
        
    }
    
    if(sum1>sum2)
    cout<<"first"<<endl;
    if(sum1<sum2)
    cout<<"second"<<endl;
    if(sum1==sum2)
    cout<<"draw"<<endl;
    
    }
    
}