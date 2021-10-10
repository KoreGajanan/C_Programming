//Accept two string from user and check whether that string are anagram or not

// If string are anagram then set of character in both the string is same
//In our example we consider only such a string which contains capital characters

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkAnagram(char *,char *);

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
	
	bRet=checkAnagram(arr,brr);
	if(bRet==TRUE)
	{
		printf("String are anagram");
	}
	else
	{
		printf("String are not anagram");
	}
	
	return 0;
}

BOOL checkAnagram(char *src,char *dest)
{
	int arr[26]={0};
	int i=0;
	
	while((*src != '\0')&&(*dest != '\0'))
	{
		if((*src >= 'A')&&(*src <= 'Z'))
		{
			arr[*src-'A']++;
		}
		else if((*dest >= 'A') && (*dest <= 'Z'))
		{
			arr[*dest-'A']--;
		}
		src++;
		dest++;
	}
	if((*src != '\0')&&(*dest != '\0'))
	{
		return FALSE;
	}
	for(i=0; i<26; i++)
	{
		if(arr[i] != 0)
		{
			break;
		}
	}
	
	if(i <26 )
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}