//reverse the inputted string
#include<stdio.h>
#include<string.h>
int main()
{

char word1[100],word2[100];
scanf("%s %s",word1,word2);

if(strcmp(word1,word2) < 0)
printf("%s comes before %s alphabetically \n",word1,word2);
else if(strcmp(word1,word2) > 0)
printf("%s comes after %s alphabetically \n",word1,word2);
else
printf("Both are equal\n");
return 0;
}
