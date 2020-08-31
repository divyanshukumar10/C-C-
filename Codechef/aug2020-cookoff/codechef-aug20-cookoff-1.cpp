#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n]={0};
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int count=0;int sum=0;
        int d=0;
        for(int i=0;(i<n) && (d==0);i++)
        {
            if(arr[i]>k){
                d++; break;}

            sum += arr[i];
            if(sum > k)
            {
                sum=arr[i];
                count++;
            }
        }

        if(d==0)
       cout<<count+1<<endl;
       else
        cout<<"-1"<<endl;
    }
}