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
//for string with space use std::getline(cin,string_name);
//***********************UVAISH ZAFRI*****************************

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int count=0;
    int i=1;
    cin>>n;
    while(1)
    {
        n=n-((i*(i+1))/2);
        if(n>=0)
        count+=1;
        else
        break;
        i+=1;
    }
    cout<<count;
  	return 0;
}