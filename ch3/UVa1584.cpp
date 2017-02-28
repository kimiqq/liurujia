#include<stdio.h>
#include<string.h>
#define maxn 105
int change(char *s,int j,int aim)
{
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[(i+j)%n]!=s[(i+aim)%n])
			return s[(i+j)%n]<s[(i+aim)%n];
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	char s[maxn];
	while(n--)
	{
		scanf("%s",s);
		int aim=0;
		int num=strlen(s);
		for(int j=1;j<num;j++)
		{
			if(change(s,j,aim))
				aim=j;
		}
		for(int i=0;i<num;i++)
		{
			putchar(s[(i+aim)%num]);
		}
		putchar('\n');
	}
	return 0;
}
