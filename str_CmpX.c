//Acccept two string from user and compair content of the both string
//If content of both string are equal then return 0(zero). o.w.return diff bet 1st mismatch character of both string


#include<stdio.h>

int strcmpX(char *,char *);

int main()
{
	char arr[25];
	char brr[25];
	int iRet=0;
	
	printf("Enter First string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter Second string   \n");
	scanf("%[^'\n']s",brr);
	
	iRet=strcmpX(arr,brr);
	
	if(iRet == 0)
	{
		printf("Both strings are same");
	}
	else
	{
		printf("Difference bet two strings are: %d",iRet);
	}
	
	
	return 0;
}

int strcmpX(char *src,char *dest)
{
	if(src==NULL || dest == NULL)
	{
		return -1;
	}
	
	while((*src != '\0')&&(*dest != '\0'))
	{
		if(*src != *dest)
		{
			break;
		}
		src++;
		dest++;
	}
	if((*src == '\0')&&(*dest == '\0'))
	{
		return 0;
	}
	else
	{
		return (*src-*dest);
	}
}