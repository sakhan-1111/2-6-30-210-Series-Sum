#include <stdio.h>
#include <conio.h>

int main()
{
    long int i,r=0,j=1,s=2;

    for(i=1; i<=20; i++)
    {
        s=s*j;
        j=j+2;
        r=r+s;
        printf("%u+",s);
    }
    printf("\nSum = %u",r);
    return 0;
}

