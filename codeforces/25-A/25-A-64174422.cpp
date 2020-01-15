#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,h,c=0,d=0,t;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]%2==0 && a[i]>1)
		{
			c++;
			k=i;
		}
		else {
			d++;
			t=i;
		}
	}
	if(d==1)
	{
		cout<<t;
	}
	else if(c==1)
	{
      cout<<k;
	}

	
}