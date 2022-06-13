

#include<stdio.h>


int main()
{
    int i;
    i=32;
    printf("Ascii table is: \n");

printf("| dec | hex | char |\n");
    do
    {
       if(i == 127)
	printf("%d \t %#x \t %s \n", i ,i, "DEL");
	printf("%d \t %#x \t %c \n",i,i,i);
	i++;
    }
    while(i<=255);
    return 0;
}
