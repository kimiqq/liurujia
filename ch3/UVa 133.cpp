#include<stdio.h>
#include<string.h>
#define maxlen 25
char a[maxlen];
int num;
//a表示目前位置，b表示步长 ，ok
int go(int w,int b,int ok)
{
	while(b--)
	{
		do
		{
			w=(w+ok+num-1)%num+1; 
		} while(a[w]==0);
	 } 
	 return w;
}
int main()
{
	int n,k,m;
	while(scanf("%d%d%d",&n,&k,&m))
	{
		num=n;
		for(int i=1;i<=n;i++)
		{
			a[i]=i;
		}
		int x=n,y=1;
		int left=n;
		while(left)
		{
			x=go(x,k,1);
			y=go(y,m,-1);
			if(x==y)
			{
				printf("%d ",x);
				left--;
			}
			else
			{
				printf("%d ",x);
				printf("%d ",y);
				left--;
				left--;
			}
			a[x]=0;
			a[y]=0;
			if(left)
				printf(",");
		} 

	}
	return 0;
}
