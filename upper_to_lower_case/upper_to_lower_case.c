#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	char str[30];
	printf("give the upper case string: ");
	
	scanf("%s", &str);
	
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		str[i] += 32;
	}
	
	printf("there u go with lower case: %s\n", str);
	
	return 0;
}
