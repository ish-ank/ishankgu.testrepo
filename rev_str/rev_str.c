#include<stdio.h>
int main(void)
{
    char str[30];
    printf("give the string: ");
    scanf("%s", str);
    
    char *ptr = str;
    int cnt=0;
    while(*ptr)
    {
        ptr++;
        cnt++;
    }
    
     ptr--;
    printf("reversed string is: ");
    while(cnt>0)
    {
       
        printf("%c", *ptr);
        ptr--;
        cnt--;
    }
    printf("\n");
    return 0;
}
