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
    char a[]={"hello"};
    string str;
    cin>>str;
    int len=str.length();int next=0;
    foi(len){
        if(str[i]==a[next])
        next+=1;
    }
    if(next==5)
    cout<<"YES";
    else
    cout<<"NO";
    
    
	return 0;
}