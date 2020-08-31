#include <bits/stdc++.h> 
using namespace std; 

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
  
    else
        return gcd(b, a % b); 
} 
  
void leftRotate(int arr[], int d, int n) 
{ 
    
    d = d % n; 
    int g_c_d = gcd(d, n); 
    for (int i = 0; i < g_c_d; i++) { 
       
        int temp = arr[i]; 
        int j = i; 
  
        while (1) { 
            int k = j + d; 
            if (k >= n) 
                k = k - n; 
  
            if (k == i) 
                break; 
  
            arr[j] = arr[k]; 
            j = k; 
        } 
        arr[j] = temp; 
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " "; 
} 
  
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        
    int a,k;
    cin>>a>>k;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    leftRotate(arr, k, n); 
    printArray(arr, n); 
    cout<<"\n";
    }
  
    return 0; 
} 