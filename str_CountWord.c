//Accept string from user and count no of words from that string

#include<stdio.h>

int countWords(char *);

int main()
{
	char arr[25];
	int iRet=0;
	
	printf("Enter String....\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	iRet=countWords(arr);
	
	printf("No of words is: %d",iRet);
	
	return 0;
}

int countWords(char *src)
{
	int iCnt=0;
	
	if(src == NULL)
	{
		return -1;
	}
	
	while(*src != '\0')
	{
		while(*src == ' ')
		{
			src++;
		}
		if(*src == '\0')
		{
			break;
		}
		iCnt++;
		
		while((*src != ' ')&&(*src !='\0'))
		{
			src++;
		}
	}
	return iCnt;
}
