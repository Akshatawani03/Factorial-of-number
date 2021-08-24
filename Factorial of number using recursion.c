#include <stdio.h>
int factorial (int n);
int main()
{
    int n;
    printf("\nEnter the number:\n");
    scanf("%d",& n);
    printf("\nFactorial is=%d",factorial(n));
    return 0;
}
int factorial (int n)
{
    if (n>=1)
    return n*
factorial(n-1);
else
return 1;

}
