//Accept two string from user and findout no of substring in first string

#include<stdio.h>


int strStrX(char *,char *);

int main()
{
	char arr[25];
	char brr[25];
	int bRet=0;
	
	printf("Enter First string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter Second string   \n");
	scanf("%[^'\n']s",brr);
	
	fflush(stdin);
	
	bRet=strStrX(arr,brr);
	
	printf("No of substring: %d",bRet);
	
}

int strStrX(char *src1,char *src2)
{
	char *temp=src2;
	
	int iCnt=0;
	
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
				iCnt++;
				src2=temp;
			}
			else if(*src1== '\0')
			{
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
	return iCnt;
}