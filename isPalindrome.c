//is palindrome using recursion
#include<stdio.h>
#include<string.h>
int isPalindrome(char* word,int leftIndex,int rightIndex)
{
if(leftIndex>rightIndex)
return 1;
if(word[leftIndex]==word[rightIndex])
isPalindrome(word,leftIndex+1,rightIndex-1);
else
return 0;


}
int main()
{

char word[100];
scanf("%s",word);
if(isPalindrome(word,0,strlen(word)-1))
printf("P\n");
else
printf("N\n");

return 0;
}
