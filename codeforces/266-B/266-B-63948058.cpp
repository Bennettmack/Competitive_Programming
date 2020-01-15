#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;
//***********************UVAISH ZAFRI*****************************

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int len,t;
   cin>>len>>t;
   string str;
   cin>>str;
   while(t--){
       for(int i=0;i<len-1;i++)
       {
           if(str[i]=='B'&&str[i+1]=='G')
           {
               str[i+1]='B';
               str[i]='G';
               i+=1;
           }
       }
   }
   cout<<str;
   
  	return 0;
}