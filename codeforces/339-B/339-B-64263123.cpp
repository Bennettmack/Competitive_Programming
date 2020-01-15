#include <bits/stdc++.h>
using namespace std;
int main() {
 long long int n,m,count=0,a1=1,i=0,sum=0;
  cin>>n>>m;
  long long int a[m];
  for(int j=0;j<m;j++)
  {
      cin>>a[j];
  }
  for(int i=0;i<m;i++)
  {
      if(a[i]>a1)
      {
          sum=a[i]-a1;
          count=count+sum;
          a1=a[i];
      }
      else if(a[i]<a1)
      {
          sum=(n-a1)+a[i];
          count=count+sum;
          a1=a[i];
      }
  }
  cout<<count;


}