#include<stdio.h>

void main()
{
    int num[2];
    int i;
    for(i=0 ; i<2 ; i++)
    {
        scanf("%d",&num[i]);
    }
    int x2 = (2*num[1])-num[0];
    printf("%d",x2);
}

