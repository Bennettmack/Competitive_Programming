#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[3],s1=0,s2=0,s3=0;
    while(n--)
    {
        scanf("%d%d%d",&A[0],&A[1],&A[2]);
        s1+=A[0];
        s2+=A[1];
        s3+=A[2];
    }
    if(s1==0 && s2==0 && s3==0)
       printf("YES");
    else
        printf("NO");
}