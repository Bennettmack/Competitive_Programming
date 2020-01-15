#include<bits/stdc++.h>
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
   int a,b,c;
   cin>>a>>b>>c;
   if(abs(a)+abs(b)>abs(c))
   cout<<"NO";
   else {
       int temp=abs(c)-(abs(a)+abs(b));
       //cout<<temp;
       if(temp%2==0)
       cout<<"YES";
       else
       cout<<"NO";
   }
  	return 0;
}