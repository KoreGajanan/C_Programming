//Accept two string from user and compare first N character from that string


#include<stdio.h>

int strcmpX(char *,char *,int);

int main()
{
	char arr[25];
	char brr[25];
	int iRet=0,iNo=0;
	
	printf("Enter First string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter Second string   \n");
	scanf("%[^'\n']s",brr);
	
	fflush(stdin);
	
	printf("ENter no that you want to compare string...\n");
	scanf("%d",&iNo);
	
	fflush(stdin);
	
	iRet=strcmpX(arr,brr,iNo);
	
	if(iRet == 0)
	{
		printf("Compare strings are same");
	}
	else
	{
		printf("Difference bet compared strings are: %d",iRet);
	}
	
	
	return 0;
}

int strcmpX(char *src,char *dest,int iCnt)
{
	
	if(src==NULL || dest == NULL || iCnt <=0)
	{
		return -1;
	}
	
	while((*src != '\0')&&(*dest != '\0')&&(iCnt != 0))
	{
		
		if(*src != *dest)
		{
			break;
		}
		src++;
		dest++;
		iCnt--;
	}
	if(iCnt == 0 )
	{
		return 0;
	}
	else
	{
		return (*src-*dest);
	}
}