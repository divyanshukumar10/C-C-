#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    int arr[n];
    int h[n]={0};
    
    for(int a=0;a<t;a++)
    {
        cin>>n;
        cin>>k;
        int max;
        int count=0;
        
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(k%arr[i]==0)
        {
        h[count]=arr[i];
        count++;
        }
    }
    
    if(count==0)
    {
        cout<<"-1"<<endl;
    }
    
    else
    {
        sort(arr, arr + n, greater<int>());
        cout<<h[0];
    }
    return 0;
}