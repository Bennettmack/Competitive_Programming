#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;

    cin>>n>>t;
    string s;
    if(t==10 && n<2){ cout<<-1; return 0;}
    else if(t==10 && n>=2)
    {
        for(int i=0;i<n-1;i++)
            s+=1+'0';
        s+=0+'0';
        cout<<s;
    }
    else{
        for(int i=0;i<n;i++)
        {
            s+=t+'0';
        }
        cout<<s;
    }
    return 0;
}