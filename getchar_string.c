//use getchar and putchar for strings
#include<stdio.h>
#include<string.h>
int main()
{

char word[100];
char ch;
int i=0;
while((ch=getchar())!='\n')
{
word[i]=ch;
i++;}
word[i]='\0';
int len=strlen(word);i=0;
printf("inputted string is :");
while(word[i]!='\0')
{

putchar(word[i]);
i++;


}

printf("\n");






return 0;
}
