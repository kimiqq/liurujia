#include<stdio.h>
#include<string.h>
#define MAXLEN 100005
int a[MAXLEN];
int main()
{

	memset(a,0,sizeof(a));
	int x;
	int y;
	for(int m=1;m<MAXLEN;m++)
	{
		x=m;
		y=m;
		while(x>0)
		{
			y+=x%10;
			x/=10;
		}
		if(m<a[y]||a[y]==0)
			a[y]=m;
	}
	int n;
	int w;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&w);
		printf("%d\n",a[w]);
	}
	return 0;
} 
