#include<stdio.h>

void main()
{
    signed long long int n;
    scanf("%d",&n);
    signed long long int re = n%3;
    signed long long int re2 = n%11;
    printf("%lld %lld",re,re2);
}

