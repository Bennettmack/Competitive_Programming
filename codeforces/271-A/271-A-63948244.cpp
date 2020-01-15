#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;
//***********************UVAISH ZAFRI*****************************
int isunique(int n)
{
    int a[10];
    fill(a,a+10,0);
    while(n)
    {
        int temp=n%10;
        a[temp]++;
        n/=10;
    }
    foi(10)
    {
        if(a[i]>1)
        return 0;
    }
    return 1;
}
main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    n+=1;
    while(!isunique(n))
    n+=1;
    cout<<n;
  	return 0;
}