//Accept two string from user and compare contents of thestring by ignoring its case

#include<stdio.h>

int striCmpX(char * ,char *);

int  main()
{
	
	char arr[25];
	char brr[25];
	int iRet=0;
	
	printf("Enter First string   \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter Second string   \n");
	scanf("%[^'\n']s",brr);
	
	fflush(stdin);
	
	iRet=striCmpX(arr,brr);
	
	if(iRet == 0)
	{
		printf("Both strings are same");
	}
	else
	{
		printf("Difference bet two strings are: %d",iRet);
	}
	
	return 0;
}

int striCmpX(char *src,char *dest)
{
	if(src == NULL || dest == NULL)
	{
		return -1;
		
	}
	
	while((*src != '\0')&&(*dest != '\0'))
	{
		if(*src == *dest)
		{
			src++;
			dest++;
			
		}
		else
		{
			if((*src >= 'A') && (*src <='Z'))
			{
				if(*src != *dest-32)
				{
					
					break;
				}
				else
				{
					
					src++;
					dest++;
				}
			}
			else if((*src >= 'a')&&( *src <= 'z'))
			{
				if((*src != *dest + 32))
				{
					
					break;
				}
				else
				{
					
					src++;
					dest++;
				}
			}
			else
			{
				
				break;
			}
		}
	}
	
	if((*src == '\0') && (*dest == '\0'))
	{
		return 0;
	}
	else
	{
		return (*src-*dest);
	}
}