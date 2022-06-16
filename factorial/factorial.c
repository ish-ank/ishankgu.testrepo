#include<stdio.h>

int main(void)
{
    int n;
    long *fact;
    printf("Input the number: ");
    scanf("%d", &n);
    *fact = 1;
    
    for(int i=2;i<=n;i++)
    {
        *fact = *fact * i;
    }
    
    printf("factorial is %li.\n ", *fact);

    return 0;
}
