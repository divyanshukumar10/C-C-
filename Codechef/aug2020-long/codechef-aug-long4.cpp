#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int freq[26]={0};

    string s;
    cin>>s;
    string p;
    cin>>p;
    int k=p.at(0)-'a';

    for(int i=0;i<s.length();i++)
        freq[s[i]-'a']++;
    for(int i=0;i<p.length();i++)
         freq[p[i]-'a']--;
       string z="";
       string w="";
    for(int i=0;i<=k;i++)
        for(int j=0;j<freq[i];j++)
    z+=((char)('a'+i));
      z+=p;
    for(int i=k+1;i<26;i++)
    for(int j=0;j<freq[i];j++)
      z+=(char('a'+i));

  for(int i=0;i<k;i++)
        for(int j=0;j<freq[i];j++)
    w+=((char)('a'+i));
      w+=p;
    for(int i=k;i<26;i++)
    for(int j=0;j<freq[i];j++)
      w+=(char('a'+i));

    cout<<min(z,w)<<endl;
    }
    return 0;
}