#include<stdio.h>

int main(void)
{
    char alpha[27];
    
    for(int i=0;i<26;i++)
    alpha[i] = 'A'+ i;
    
    
    char *ptr = alpha;
    
    printf("printing all the alphabets using pointer:\n");
    for(int i=0;i<26;i++)
    {
        printf("%c", *ptr);
        ptr++;
    }
	printf("\n");
    return 0;
    
}
