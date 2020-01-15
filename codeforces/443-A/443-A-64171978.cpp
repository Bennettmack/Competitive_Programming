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
//***********************UVAISH ZAFRI*****************************

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   string str;
  std::getline(cin,str);
   int a[26];
   fill(a,a+26,0);
   foi(str.length())
   {
       if(str[i]!=','&&str[i]!='{'&&str[i]!='}')
       a[str[i]-97]=1;
   }
 
   cout<<accumulate(a,a+26,0);
  	return 0;
}