#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[100];
        int count=0;
        cin>>a;
        for(int i=0;a[i]!='\0';i++)
        {
            count+=1;
        }
        if(count>10)
        {
            cout<<a[0]<<count-2<<a[count-1]<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
}