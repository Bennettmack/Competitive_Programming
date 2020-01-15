#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;int n=0,e=0,t=0,i=0;
    cin>>s;
    int len=s.length();
    for(int j=0;j<len;j++)
    {
        if(s[j]=='n')
        n+=1;
        else if(s[j]=='e')
        e+=1;
        else if(s[j]=='t')
        t+=1;
        else if(s[j]=='i')
        {i+=1;}
    }if(n<=3)
    {n/=3;}
    else{
        
        n=((n-3)/2);
        n+=1;
    }
    e/=3;
   //cout<<n<<endl<<e<<endl<<t<<endl<<i;
    if(n<=e&&n<=t&&n<=i)
   { cout<<n;return 0;}
     if(e<=n&&e<=t&&e<=i)
    {cout<<e;return 0;}
     if(i<=e&&i<=t&&i<=n)
    {cout<<i;return 0;}
     if(t<=e&&t<=n&&t<=i)
    {cout<<t;return 0;}
}