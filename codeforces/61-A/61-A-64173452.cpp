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
   string a,b;
   
   cin>>a>>b;
   foi(a.length())
   {
       if((a[i]=='1'||b[i]=='1')&&!(a[i]=='1'&&b[i]=='1'))
       cout<<"1";
       else
       cout<<"0";
   }
  	return 0;
}