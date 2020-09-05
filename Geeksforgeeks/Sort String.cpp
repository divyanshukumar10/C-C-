#include<bits/stdc++.h> 
using namespace std; 
  
void sortString(string &str) 
{ 
   sort(str.begin(), str.end()); 
   cout << str<<endl; 
} 
  
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    sortString(s);  
    }
    return 0; 
} 