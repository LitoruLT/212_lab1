#include<stdio.h>

void main()
{
    long long int n;
    scanf("%d",&n);
    int re = n%3;
    int re2 = n%11;
    printf("%d %d",re,re2);
}

