//Recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int SumN (int n)
{
    if(n>1)
    return (n+SumN(n-1));
}
int main()
{
    int n;
    printf("Enter a number to print sum of first N natural numbers : ");
    scanf("%d",&n);
    printf("\n\n Addition of first %d natural number(s) = %d\n\n",n,SumN(n));
    return 0;
}
