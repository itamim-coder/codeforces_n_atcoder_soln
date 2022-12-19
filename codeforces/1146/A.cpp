#include<stdio.h>
#include<string.h>


int main()
{
    char a[51];
    scanf("%s", a);
    int count=0;

    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]=='a') count++;
    }
    int res=count*2-1>strlen(a) ? strlen(a) : count*2-1;
    printf("%d\n", res);
    return 0;
}
