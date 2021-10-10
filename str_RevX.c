//Accept string from user and reverse the contents of the string inplace

#include<stdio.h>

void strRev(char *);

int main()
{
	char arr[25];
	
	printf("Enter String...\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	strRev(arr);
	
	printf("Reverse string is: %s",arr);
	
	return 0;
}

void strRev(char *src)
{
	char *dest=src;
	char temp;
	
	if(src == NULL)
	{
		return;
	}
	while(*dest != '\0')
	{
		dest++;
	}
	dest--;
		
	while(src <= dest)
	{
		temp=*src;
		*src=*dest;
		*dest=temp;
		src++;
		dest--;
	}
}