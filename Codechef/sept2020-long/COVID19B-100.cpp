#include<bits/stdc++.h>
using namespace std;
#define  l int
int main()
{
    int t,i,j;
    cin>>t;
 while(t--)
 {
     int a,maximum,countd=0,more=-1,count=0;
     cin>>a;
     int velocity[n+1],player[n+1];
     for(i=1;i<=a;i++)
         cin>>velocity[i];
      for(i=1;i<=a;i++)
     { 
         count=0,countd=0,more=-1;
       for(j=1;j<i;j++)
       {
           if(velocity[j]>velocity[i])
           {
             count++;
             if(velocity[j]>more)
              m=velocity[j];
           }
       }
       int opplayer[i-1];
       for(j=1;j<i;j++)
       {
           opplayer[j]=velocity[j];
       }
       for(j=1;j<i;j++)
         {
             for(int k=i+1;k<=a;k++)
           {
              if(opplayer[j]!=more && opplayer[j]<=velocity[i])
              {
                  if(opplayer[j]>velocity[k])
                  {
                  countd++;
                  break;
                  }
              }
           }
       }
       for(j=i+1;j<=a;j++)
       {
           
           if(count>0 && velocity[j]<m)
           {
             countd++;
           }
           if(count==0)
           {
           if(velocity[j]<velocity[i]) 
             countd++;
           }
       }
    player[i]=count+countd+1;
     }
   sort(player+1, player + a +1);
   cout<<player[1]<<" "<<player[a]<<"\n";
   
 }
}