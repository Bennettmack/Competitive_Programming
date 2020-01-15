#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
using namespace std;

int32_t main() {
int n;
cin>>n;

int count=0;int a[n];
foi(n){
    int temp;
    cin>>temp;
    int min=*min_element(a,a+i);
    int max=*max_element(a,a+i);
    if(temp<min||temp>max)
    count+=1;
    a[i]=temp;
    //cout<<count<<" "<<temp<<endl;
}
if(count>0)
count-=1;
cout<<count;
	return 0;
}