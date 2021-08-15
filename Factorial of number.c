#include <stdio.h>
int main()
{
    int number;
    long fact=1;
    int i;
    printf("\nEnter a Number:");
    scanf("%d",& number);
    for(i=1;i<=number;++i)
    {
        fact = fact*i;
    }
     printf("\n factorial is %ld",fact);
    return 0;
}