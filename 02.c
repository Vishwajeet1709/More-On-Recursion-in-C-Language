//Recursive function to print sum of first N odd natural numbers
#include<stdio.h>
int SumOfOdd(int n)
{
    if(n>1)
        return(2*n-1+SumOfOdd(n-1));
}
int main()
{
    int n;
    printf("Enter a number to print sum of first N odd natural numbers : ");
    scanf("%d",&n);
    printf("\n\n Sum of first %d odd natural numbers : %d \n\n",n,SumOfOdd(n));
    return 0;
}
