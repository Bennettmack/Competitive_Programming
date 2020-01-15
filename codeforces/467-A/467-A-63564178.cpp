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
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(b-a>=2)
        count+=1;
    }
    cout<<count;
	return 0;
}