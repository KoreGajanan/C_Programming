//Accept two string from user and findout largest substring

#include<stdio.h>


void maxStrStrX(char *,char *);

int main()
{
	char arr[25];
	char brr[25];
	
	
	printf("Enter First string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter Second string   \n");
	scanf("%[^'\n']s",brr);
	
	fflush(stdin);
	
	maxStrStrX(arr,brr);
	
	return 0;	
}

void maxStrStrX(char *str1,char *str2)
{
	char *temp=str2, *start=NULL, *ptr=NULL;
	int i=0,iCnt=0,iMax=0;
	
	while(*str1 != '\0')
	{
		if(*str1 == *str2)
		{
			start=str1;
			iCnt=0;
			
			while((*str1 != '\0') && (*str2 != '\0'))
			{
				if(*str1 != *str2)
				{
					break;
					
				}
				str1++;
				str2++;
				iCnt++;
			}
			if(iCnt > iMax)
			{
				iMax=iCnt;
				ptr=start;
			}
			str2=temp;
		}
		else
		{
			str1++;
		}
	}
	printf("Largest substring is  \n");
	while(iMax != 0)
	{
		printf("%c",*ptr);
		iMax--;
		ptr++;
	}
	
}