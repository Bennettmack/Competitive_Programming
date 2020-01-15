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
   int n;
   cin>>n;
   int a[n][2];
   int count=0;
   foi(n)
   cin>>a[i][0]>>a[i][1];
   foi(n)
   {
       foj(n)
       {
           if(i!=j)
           {
               //i is host
               if(a[i][0]==a[j][1])
               count+=1;
               
           }
       }
   }
   cout<<count;
  	return 0;
}