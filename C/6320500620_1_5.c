#include<stdio.h>
void main()
{
    int n,max;
    printf("");
    scanf("%d",&n);

    int num[n],i;
    printf("");

    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    int po;
    for(i=0;i<n;i++)
    {
        if(i==0)
            max=num[0];
        else if(max < num[i])
        {
            max=num[i];
            po = i+1;
        }
    }
    printf("%d %d",po,max);
}
