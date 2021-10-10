//Accept 2 string from user and copy the content of second string at the end of 1st string

#include<stdio.h>

void strCatX(char *,char *);

int main()
{
	char arr[25];
	char brr[25];
	
	printf("Enter 1st string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter 2nd string   \n");
	scanf("%[^'\n']s",brr);
	
	strCatX(arr,brr);
	
	printf("Concat string is: %s",arr);
	
	return 0;
}

void strCatX(char *src, char *dest)
{
	if(src == NULL || dest == NULL)
	{
		return;
	}
	
	while(*src != '\0')
	{
		src++;
	}
	
	while(*dest != '\0')
	{
		*src=*dest;
		src++;
		dest++;
	}
	*src='\0';
}

