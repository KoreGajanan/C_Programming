//Accept string and one character from user & return the first occurence of that character

#include<stdio.h>

//function declaration
int strChrX(const char *,char);

//entry point function
int main()
{
	char arr[20]={'\0'};
	char ch='\0';
	int iRet=0;
	
	printf("Enter String.....\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
		
	printf("Enter one character.......\n");
	scanf("%c",&ch);
	
	iRet=strChrX(arr,ch);
	
	if(iRet==-1)
	{
		printf("There is no such character");
	}
	else
	{
		printf("First occurence of character %d",iRet);
	}
	
	return 0;
}

//this function finds first occurence of character

int strChrX(const char *str,char iValue)
{
	int iPos=1;
	
	if((str==NULL)|| iValue=='\0')
	{
		return -1;
	}
	
	while(*str!='\0')
	{
		if(*str==iValue)
		{
			break;
		}
		iPos++;
		str++;
	}
	if(*str=='\0')
	{
		return -1;
	}
	else
	{
		return iPos;
	}
}