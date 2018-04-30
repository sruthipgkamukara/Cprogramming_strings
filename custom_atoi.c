//convert string to integer without using atoi function
#include<stdio.h>
#include<string.h>
int main()
{
	int sign=1,index=0,num=0;
	char word[100];
	scanf("%s",word);
	int len=strlen(word);
	if(word[0]=='-')
	{
		sign=-1;
		index=1;
	}
	while(word[index]!='\0')
	{
		if(word[index]>='0' && word[index]<='9')
		{
			num=num*10 +( (word[index])-'0');
		}
		else
			break;
		index++;
	}
	num*=sign;
	printf("Converted integer :%d\n",num);
	return 0;





}
