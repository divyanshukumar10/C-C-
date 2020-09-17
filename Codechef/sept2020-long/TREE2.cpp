#include<bits/stdc++.h>
using namespace std;
#define  l int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int z,count=0;
        cin>>z;
        int arr[z];
        for(int i=0;i<z;i++)
        {
            cin>>arr[i];
        }
      sort(arr,arr+z,greater<int>());
      
      for(int i=0;i<z-1;i++)
      {
          if( arr[i+1]==0)
          break;
          if(arr[i]==arr[i+1])
           continue;
             count++;
         }
      if(arr[0]==0)
      cout<<"0"<<"\n";
      else
      cout<<count+1<<"\n";
}
}