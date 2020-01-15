#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;
//***********************UVAISH ZAFRI*****************************

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int temp=1;
    int count=0;
   while(1)
   { 
       if(n>=1)
       count+=1;
       n-=1;
       if( temp%m==0)
      n+=1;
      temp+=1;
      if(n==0)
      break;
       
       
   }
   cout<<count;
   
    
  	return 0;
}