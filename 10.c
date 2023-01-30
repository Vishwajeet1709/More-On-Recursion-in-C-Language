//recursive program to calculate power of a number
#include<stdio.h>
int PowerFunction(int base, int exp)
{
    if(exp==0)
        return 1;
    if(exp>0)
    {
        return(base*PowerFunction(base,exp-1));
    }
}
int main()
{
    int base, exp;
    printf("Enter a base and power respectively : ");
    scanf("%d%d",&base,&exp);
    printf("\n\n\t %d ^ %d = %d.\n\n",base, exp, PowerFunction(base, exp));
    return 0;
}
