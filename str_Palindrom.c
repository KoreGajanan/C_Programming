//Accept string from user and check whether that string is palindrom or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkPalindrom(char *);

int main()
{
	char arr[35];
	BOOL bRet=FALSE;
	
	printf("Enter String...\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	bRet=checkPalindrom(arr);
	
	if(bRet==TRUE)
	{
		printf("String is Palindrome....");
	}
	else
	{
		printf("String is not Palindrome....");
	}
	
	return 0;
}

BOOL checkPalindrom(char *start)
{
	char *end=start;
	
	if(start==NULL)
	{
		return FALSE;
	}
	
	while(*end != '\0')
	{
		end++;
	}
	
	end--;
	
	while(start < end )
	{
		if(*start != *end)
		{
			break;
		}
		start++;
		end--;
	}
	if(start < end)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
