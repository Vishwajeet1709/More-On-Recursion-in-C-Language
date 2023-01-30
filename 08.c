//recursive program to print N terms of Fibonacci series
#include<stdio.h>
void PrintFibo (int n)
{
    static int a=0,b=1,c=1;
    if(n>0)
    {
        printf(" %d",c);
        c=a+b;
        a=b;
        b=c;
        PrintFibo(n-1);
    }
}
int main()
{
    int n;
    printf("Enter a number to print Fibonacci series : ");
    scanf("%d",&n);
    printf("\n\n Fibonacci series : ");
    PrintFibo(n);
    printf("\n\n");
    return 0;
}
