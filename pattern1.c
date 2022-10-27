#include <stdio.h>
int pattern();
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
int pattern(int (n))
{
    if (n == 1)
    
        printf("*\n");
    else
    
    pattern(n-1);
    for (int i = 0; i <=(2 * n - 1); i++)
    {
        printf("*");
    } printf("\n");
    
    return 0;
}