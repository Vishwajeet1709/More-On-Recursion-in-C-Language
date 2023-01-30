//Recursive program to print sum of its own digits
#include<stdio.h>
int AddDigits(int n)
{
    if(n>0)
        return(n%10+AddDigits(n/10));
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number to add its digits : ");
    scanf("%d",&num);
    printf("\n\n Addition of digits, of %d = %d\n\n",num,AddDigits(num));
    return 0;
}
