//Accept string from user and copy its contents into another string

#include<stdio.h>

void strCpyX(char *,char *);

int main()
{
	char arr[25];
	char brr[25];
	
	printf("Enter String that you want to copy ...\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	strCpyX(arr,brr);
	
	printf("Copy string is: %s ",brr);	
	
	return 0;
}

void strCpyX(char *src,char *dest)
{
	if(src==NULL)
	{
		return;
	}
	
	while(*src != '\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}