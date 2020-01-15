#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
long int n,k,ld;
cin>>n;
for(int i=1;i<=n;i++)
{
    if(i>1 && i<=n)
    {
        cout<<"that ";
    }
    if(i%2!=0)
        cout<<"I hate"<<" ";
    else
        cout<<"I love"<<" ";
}
cout<< "it";
}