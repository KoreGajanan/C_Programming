//Accept string from user and findout length of largest word from that string

#include<stdio.h>

int maxWord(char *);

int main()
{
	char arr[25];
	int iRet=0;
	
	printf("Enter string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	iRet=maxWord(arr);
	
	printf("Largest word is: %d",iRet);
	
	
	return 0;
}

int maxWord(char *src)
{
	int iCnt=0, iMax=0;
	
	if(src == NULL)
	{
		return -1;
	}
	
	while(*src != '\0')
	{
		//skip whitespaces
		
		while(*src == ' ')
		{
			src++;
		}
		
		if(*src == '\0')
		{
			break;
		}
		
		while((*src != '\0')&&(*src != ' '))
		{
			src++;
			iCnt++;
		}
		if(iMax < iCnt)
		{
			iMax=iCnt;
		}
		iCnt=0;
		if(*src == '\0')
		{
			break;
		}
	}
	return iMax;
}
	