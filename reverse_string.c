//reverse the inputted string
#include<stdio.h>
#include<string.h>
int main()
{

char word[100];
scanf("%s",word);
int len=strlen(word);
char rev[len];int j=0;
for(int i=len-1;i>=0;i--)
rev[j++]=word[i];
printf("Entered word :%s \nReveresed word : %s\n",word,rev);
return 0;
}
