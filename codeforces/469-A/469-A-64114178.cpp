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
   int a[n];
   fill(a,a+n,0);
   int x;
   cin>>x;
   while(x--)
   {
       int temp;
       cin>>temp;
       a[temp-1]=1;
   }
 
   cin>>x;
   while(x--)
   {
       int temp;
       cin>>temp;
       a[temp-1]=1;
   }
 int count=0;
 foi(n)
 if(a[i]==1)
 count+=1;
   if(n==count)
   cout<<"I become the guy.";
   else
   cout<<"Oh, my keyboard!";
   return 0;
}