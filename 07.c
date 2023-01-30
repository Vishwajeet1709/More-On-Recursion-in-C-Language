//Recursive program to calculate HCF or two numbers
#include<stdio.h>
int HCF(int a, int b)
{
    if(b!=0)
        return HCF(b,a%b);
    else
        return(a);
}
int main()
{
    int a,b;
    printf("Enter any two numbers to find HCF : ");
    scanf("%d%d",&a,&b);
    printf("\n\n\t%d is the HCF of %d and %d.\n\n",HCF(a,b),a,b);
    return 0;
}
