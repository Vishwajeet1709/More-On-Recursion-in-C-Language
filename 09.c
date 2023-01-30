//Recursive program to count digits in a given number
#include<stdio.h>
int CountDigits (int n)
{
    static int i=0;
    if(n!=0)
    {
        i++;
        CountDigits(n/10);
    }
    return i;
}
int main()
{
    int dig;
    printf("Enter any number to count its digits : ");
    scanf("%d",&dig);
    printf("\n\n %d has %d digits.\n\n",dig,CountDigits(dig));
    return 0;
}
