#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    scanf("%s",A);
    for(int i=0;i<strlen(A);i++)
    {
        if(A[i]=='a' || A[i]=='A' || A[i]=='e' || A[i]=='E' || A[i]=='i' || A[i]=='I' || A[i]=='o' || A[i]=='O' ||A[i]=='u' || A[i]=='U' || A[i]=='y' || A[i]=='Y')
            continue;
        else if(isupper(A[i]))
             printf(".%c",tolower(A[i]));
        else
              printf(".%c",A[i]);    
    }
}