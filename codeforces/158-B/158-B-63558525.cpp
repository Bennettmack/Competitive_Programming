#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int a[5]={0},k,taxi=0;

   for(int i=0;i<n;i++)
   {
       cin>>k;
       a[k]++;
   }
   taxi+=a[4];
   taxi+=a[3];
   a[1]=a[1]-a[3];
   if(a[1]<0){
       a[1]=0;
   }
taxi+=a[2]/2+a[2]%2;
a[1]=a[1]-2*(a[2]%2);
if(a[1]>0)
    taxi+=a[1]/4;
if(a[1]%4>0)
taxi++;
cout<<taxi;

}