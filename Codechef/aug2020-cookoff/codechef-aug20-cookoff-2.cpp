#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--)
 {
   int n;
 long x,y;
   cin>>n;
   int sum=n;
   for(int i=0;i<n;i++)
        cin>>x>>y;

     int r=n/2;

     int i=r;

     while(i>=3)
     {

         sum +=i;
         i=i/2;

     }


   cout<<sum<<endl;
 }


}