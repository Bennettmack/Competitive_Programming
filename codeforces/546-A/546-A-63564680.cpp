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
    int n,k,w;
    cin>>k>>n>>w;
    int total=k*(w*(w+1)/2);
    int temp=(total-n);
    if(temp<0)
    temp=0;
    cout<<temp;
	return 0;
}