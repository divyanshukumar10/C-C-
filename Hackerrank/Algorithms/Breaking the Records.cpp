#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int min;
    int max;
    int cmax=0;
    int cmin=0;
    
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            cmin++;
        }
        
        if(max<arr[i])
        {
            max=arr[i];
            cmax++;
        }
        
    }
    
    cout<<cmax<<" "<<cmin<<endl;
    
    return 0;
}