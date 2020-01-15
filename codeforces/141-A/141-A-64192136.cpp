#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define foj(n) for(int j=0;j<n;j++)
#define mod 1000000007
#define endl "\n"
using namespace std;
//for string with space use std::getline(cin,string_name);
//***********************UVAISH ZAFRI*****************************

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   string d,b,c;
   int a[26];

   cin>>d>>b>>c;
   fill(a,a+26,0);
   foi(c.length())
   a[c[i]-65]++;
   foi(d.length())
   a[d[i]-65]--;
   foi(b.length())
   a[b[i]-65]--;
   
   foi(26){
     
       if(a[i]!=0){
           cout<<"NO";
           return 0;
       }
   }
   cout<<"YES";
   
  	return 0;
}