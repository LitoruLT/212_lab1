#include<stdio.h>

void main()
{
    unsigned long long int n , re1, re2;
    scanf("%llu",&n);
    re1 = n%3;
    re2 = n%11;
    printf("%llu %llu",re1,re2);
}

