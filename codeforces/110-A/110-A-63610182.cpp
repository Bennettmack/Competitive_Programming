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
   cin>>n;
   int count=0;
   while(n){
       int temp=n%10;
       if(temp==4||temp==7)
       count+=1;
       n/=10;
   }
   if(count==4||count==7)
   cout<<"YES";
  else
  cout<<"NO";
	return 0;
}