#include<stdio.h>
#include<math.h>

int main()
{

    unsigned long long int a,b[4];
    int i,j;
    for(i=1; i<=4; i++)
    {
        scanf("%lld",&a);
    }
    for(i=4; i>=1; i--)
    {
        b[j] = sqrt(a);
        printf("%lld\n",b[j]);
    }

    return 0;
}
