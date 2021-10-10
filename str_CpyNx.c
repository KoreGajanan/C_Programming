//Accept string from user and copy content of that string into another string by removing extra white spaces.


#include<stdio.h>

void strCpyX(char *,char *);

int main()
{
	char arr[25];
	char brr[25];
	
	printf("Enter string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	strCpyX(arr,brr);
	
	printf("Copy string by removing white spaces is: %s",brr);
	
	return 0;
}

void strCpyX(char *src,char *dest)
{
	
	if(src == NULL)
	{
		return;
	}
	
	while(*src != '\0')
	{
		//remove white spaces
		
		while(*src == ' ')
		{
			src++;
		}
		while((*src != '\0')&& (*src != ' '))
		{
			*dest=*src;
			src++;
			dest++;
		}
	}
	*dest='\0';
}