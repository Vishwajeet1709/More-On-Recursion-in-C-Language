//Recursive program to calculate factorial
#include<stdio.h>
int Factorial(int n)
{
    if(n>0)
        return(n*Factorial(n-1));
    else
        return 1;
}
int main()
{
    int n;
    printf("Enter a number to print its factorial : ");
    scanf("%d",&n);
    printf("\n\nFactorial of %d is = %d \n\n",n,Factorial(n));
    return 0;
}
