#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	char *temp;
	printf("give the no. of names");
	scanf("%d",&n);
	printf("give the names\n");
	char *p[n];
	for(i=0;i<n;i++)
	p[i]=(char*)malloc(10*sizeof(char));
	for(i=0;i<n;i++)
	{
	scanf("%s",p[i]);
    }
for(i=0;i<n;i++)
{
	for(j=0;j<n-1;j++)
	{
		if(strcmp(p[j],p[j+1])>0)
		{
			strcpy(temp,p[j]);
			strcpy(p[j],p[j+1]);
			strcpy(p[j+1],temp);
		}
	}
}
printf("Names in alphabetical order\n");
for(i=0;i<n;i++)
printf("%s\n",p[i]);
return 0;
}
