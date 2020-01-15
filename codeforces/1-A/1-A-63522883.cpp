#include<iostream>
#define int long long
using namespace std;
 main()
{
    int n,m,a;
    int result1=0,result2=0;;
    cin>>n>>m>>a;
    
    if(n%a==0)
    {
        result1+=(n/a);
    }
    else
    {
        result1+=((n/a)+1);
    }
     if(m%a==0)
    {
        result2+=(m/a);
    }
    else
    {
        result2+=((m/a)+1);
    }cout<<result1*result2<<endl;
}