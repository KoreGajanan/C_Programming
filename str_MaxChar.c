//Accept string and return such a character which occurence maximum no of times
//There is no need to consider case of character

#include<stdio.h>

char maxChar(char *);

int main()
{
	char arr[25];
	char cRet;
	printf("Enter string.......\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	cRet=maxChar(arr);
	
	printf("character which occurence maximum no of times: %c",cRet);
	
	return 0;
}

char maxChar(char *src)
{
	char arr[26]={0};
	int i=0,iMax=0,iPos=0;
	
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			arr[*src-'A']++;
		}
		else if((*src >= 'a')&&(*src <= 'z'))
		{
			arr[*src-'a']++;
		}
		src++;
	}
	
	for(i=0; i <26; i++)
	{
		if(arr[i] > iMax)
		{
			iMax=arr[i];
			iPos=i;
		}
	}
	
	return iPos+'A';
}