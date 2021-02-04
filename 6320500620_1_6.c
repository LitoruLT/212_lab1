#include<stdio.h>
void main()
{
    long long int k=3,max;
    //scanf("%lld",&n);
    long long int num[k];
    int i;
    char foot;
    for(i=0;i<k;i++)
        scanf("%lld",&num[i]);
    fflush(stdin);
    scanf("%c",&foot);

    long long int n = num[0], m = num[1], t = num[2];
    int j,o;
    for(i=t ; i>0 ;)
    {
        switch(foot)
        {
           case 'L':
                for(j=n ; j>0 ; j--)
                {
                    i=i-1;
                }
                foot = 'R';
                break;
            case 'R':
                for(o=m ; o>0 ; o--)
                {
                    i=i-1;
                }
                foot = 'L';
                break;
            default:
                printf("Error");
        }


    }
    printf("%c",foot);


}
