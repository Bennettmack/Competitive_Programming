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
   int  n,m,a,b;
   cin>>n>>m>>a>>b;
   //n-number of rides,m-rides in special,b-rate per m ride ,a-normal ride cost;
   if(float(b)/float(m)>float(a))
   {
       int res=n*a;
       cout<<res;
       return 0;
   }
   else
   {
       int res=(n/m)*b;
       n%=m;
      if(n>0)
      {if(n*a<b)
      res+=(n*a);
      else
      res+=b;
      }
       
       cout<<res;
       
   }
  	return 0;
}