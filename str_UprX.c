//Accept string from user and convert small to capital


#include<stdio.h>

void strUprX(char *);

int main()
{
	char arr[25];
	
	printf("Enter string...\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	strUprX(arr);
	
	char *ptr=arr;
	
	printf("Uppercase string is...\n");
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	
	return 0;
}

void strUprX(char *str)
{
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str >= 'a')&& (*str <= 'z'))
		{
			*str=(*str)-32;
		}
		str++;
	}
}