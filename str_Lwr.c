//Accpet string from user and convert every capital case character into small case character

#include<stdio.h>

void strLwr(char *str);

int main()
{
	char arr[25];
	
	printf("Enter string.....\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	strLwr(arr);
		
	char *ptr=arr;
	printf("Lowercase string is: \n");
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	return 0;
}

void strLwr(char *str)
{
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str=(*str)+32;
		}
		str++;
	}
}