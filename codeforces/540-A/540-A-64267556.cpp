#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n,i,j,k,s2=0,su=0,t,c;
  	cin>>n;
    string s,s1;
    cin>>s>>s1;
 
    for(i=0;i<n;i++)
    {
    	 k=abs(s[i]-s1[i]);
    	if(k>=5)
    	{
    		c=10-k;
    		su=su+c;
    	}
    	else
    	{
    		t=abs(s[i]-s1[i]);
    		s2=s2+t;
    	}
    }
    cout<<s2+su;
 }