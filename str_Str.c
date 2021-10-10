//Accept two string from user and check whether second string is substring of first string

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL strStrX(char *,char *);

int main()
{
	char arr[25];
	char brr[25];
	BOOL bRet=FALSE;
	
	printf("Enter First string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter Second string   \n");
	scanf("%[^'\n']s",brr);
	
	fflush(stdin);
	
	bRet=strStrX(arr,brr);
	
	if(bRet == TRUE)
	{
		printf("Second string is substring of first string...");
	}
	else
	{
		printf("Second string is not substring of first string...");
	}
	
	return 0;
}

BOOL strStrX(char *src1,char *src2)
{
	char *temp=src2;
	BOOL Flag=FALSE;
	
	while(*src1 != '\0')
	{
		if(*src1 == *src2)
		{
			while((*src1 != '\0') && (*src2 != '\0'))
			{
				if(*src1 != *src2)
				{
					break;
				}
				src1++;
				src2++;
			}
			if(*src2 == '\0')
			{
				Flag=TRUE;
				break;
			}
			else if(*src1== '\0')
			{
				Flag=FALSE;
				break;
			}
			else
			{
				src2=temp;
			}
		}
		else
		{
			src1++;
		}
	}
	return Flag;
}