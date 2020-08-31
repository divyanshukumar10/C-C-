#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        sort(arr, arr+n);
        
        int k;
        cin>>k;
        cout<<arr[k-1]<<endl;
        
        return 0;
    }
    
    
    
	
	return 0;
}