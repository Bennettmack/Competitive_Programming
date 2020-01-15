#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
using namespace std;
//***********************UVAISH ZAFRI*****************************

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n;
   int res=0;
   cin>>n;
   char str[n];
   foi(n){
   cin>>str[i];
   if(i!=0&&str[i]==str[i-1])
   res+=1;
   }
   cout<<res<<endl;
   
	return 0;
}