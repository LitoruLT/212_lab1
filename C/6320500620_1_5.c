#include<stdio.h>
void main()
{
    long long int n,max;
    scanf("%lld",&n);
    long long int num[n],i;
    for(i=0;i<n;i++)
        scanf("%lld",&num[i]);

    long long int po;
    for(i=0;i<n;i++)
    {
        if(i==0)
            max=num[0];
        else if(max < num[i])
        {
            max=num[i];
            po = i;
        }
    }
    printf("%lld %lld",po+1,max);
}
