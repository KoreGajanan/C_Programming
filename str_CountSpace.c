//Accept string and count white space

#include<stdio.h>

int countSpace(char *);

int main()
{
	char arr[30];
	int iRet=0;
	
	printf("Enter string....\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	iRet=countSpace(arr);
	
	printf("No of white space is: %d ",iRet);
	
	return 0;
}

int countSpace(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!= '\0')
	{
		if(*str ==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}