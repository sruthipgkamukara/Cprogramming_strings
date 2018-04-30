//reverse  string without using extra space
#include<stdio.h>
#include<string.h>
int main()
{
char word[100];
scanf("%s",word);
int leftIndex=0,lastIndex=strlen(word)-1;
while(leftIndex<=lastIndex)
{
char temp=word[leftIndex];
word[leftIndex]=word[lastIndex];
word[lastIndex]=temp;


leftIndex++;
lastIndex--;



}
printf("Reversed string %s\n",word);
return 0;






}
