//Accept string from user and one character and return last occurence of that character

#include<stdio.h>

int strNcharX(const char *, char);

int main()
{
	char arr[25];
	char ch;
	int iRet=0;
	
	printf("Enter string.......\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter one character...........\n");
	scanf("%c",&ch);
	
	iRet=strNcharX(arr,ch);
	
	printf("Last occurence of character is: %d",iRet);
	
	
}

int strNcharX(const char *str,char ch)
{
	int iPos=0,iCnt=1;
	
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iPos=iCnt;
		}
		iCnt++;
		str++;
	}
	
	return iPos;
	
}
