//reverse the inputted string
#include<stdio.h>
#include<string.h>
int main()
{

char word[100];
scanf("%s",word);
int len=strlen(word);
char rev[len];int j=0;
strcpy(rev,word);
printf("Entered word :%s \nCopied word : %s\n",word,rev);
return 0;
}
