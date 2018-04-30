//concatenate two strings
#include<stdio.h>
#include<string.h>
char* concat(char* a,char* b)
{
int al=strlen(a);
int bl=strlen(b);
char c[al+bl];
for(int i=0;i<al;i++)
c[i]=a[i];
int k=al;
for(int j=0;j<bl;j++)
c[k++]=b[j];
return c;



}
int main()
{
char a[100],b[100];
scanf("%s %s",a,b);
printf("Concatenated string is %s\n",strcat(a,b));
return 0;
}

