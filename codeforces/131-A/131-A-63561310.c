#include<stdio.h>
#include<ctype.h>
int main()
{
    char A[100];
    scanf("%s",A);
    int count=0;
    for(int i=1;i<strlen(A);i++)
    {
        if(isupper(A[i]))
           count++;
    }
    if(count!=(strlen(A)-1))
    {   printf("%s",A); exit(0);  }
    
    if(isupper(A[0]))
       printf("%c",tolower(A[0]));
    else
        printf("%c",toupper(A[0]));
    
    for(int i=1;i<strlen(A);i++)
        printf("%c",tolower(A[i]));
}