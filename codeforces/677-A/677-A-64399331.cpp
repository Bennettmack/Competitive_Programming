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
    int n,h;
    cin>>n>>h;
    int a[n];
    int count=0;
    foi(n){
    cin>>a[i];
    if(a[i]>h)
    count+=2;
    else
    count+=1;
    }
    cout<<count;
    
    
  	return 0;
}