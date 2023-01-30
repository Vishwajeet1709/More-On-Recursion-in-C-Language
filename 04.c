//Recursive program to calculate sum of square of N natural numbers
#include<stdio.h>
int SumOfSquare(int n)
{
    if(n>1)
        return(n*n+SumOfSquare(n-1));
}
int main()
{
    int num;
    printf("Enter a number to find sum of square of n natural numbers :");
    scanf("%d",&num);
    printf("\n\nSum of square of first %d natural numbers : %d \n\n",num,SumOfSquare(num));
    return 0;
}
