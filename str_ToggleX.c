//Accept string from user and toggle its case

#include<stdio.h>

void strToggleX(char *);

int main()
{
	char arr[25];
	
	printf("ENter strinf.....\n");
	scanf("%[^'\n']",arr);
	
	fflush(stdin);
	
	strToggleX(arr);
	
	char *ptr=arr;
	printf("Toggle strinf is:  \n");
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	return 0;
}

void strToggleX(char *str)
{
	while(*str !='\0')
	{
		if((*str >= 'A')&& (*str <= 'Z'))
		{
			*str=(*str)+32;
		}
		else if((*str >= 'a')&&(*str <= 'z'))
		{
			*str=(*str)-32;
		}
		str++;
	}
}