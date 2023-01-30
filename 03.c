//Recursive function to print sum of first N even natural numbers
#include<stdio.h>
int SumOfEven(int n)
{
    if(n>0)
        return(2*n+SumOfEven(n-1));
}
int main()
{
    int n;
    printf("Enter a number to print sum of first N even natural numbers : ");
    scanf("%d",&n);
    printf("\n\n Sum of first %d even natural numbers : %d \n\n",n,SumOfEven(n));
    return 0;
}

