//Accept string from user and revers the word in place

#include<stdio.h>

void wordReverse(char *);

int main()
{
	char arr[25];
	
	printf("Enter string.......\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	wordReverse(arr);
	
	printf("Revers string is: \n");
	
	printf("%s \n",arr);
	
	return 0;
}

void wordReverse(char *src)
{
	char temp;
	char *start=NULL,*end=NULL;
	
	if(src==NULL )
	{
		return;
	}
	
	while(*src != '\0')
	{
		while(*src==' ')
		{
			src++;
			
		}
		
		if(*src == '\0')
		{
			break;
		}
		
		start=src;
	
		while((*src != '\0' )&&(*src != ' '))
		{
			src++;
			
		}
		end=src-1;
		
		while(start < end)
		{
			temp=*start;
			*start=*end;
			*end=temp;
			start++;
			end--;
			
			
		}
		if(*src== '\0')
		{
			break;
		}
		
	}	
}

