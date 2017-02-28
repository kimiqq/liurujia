#include<stdio.h>
#define INF 1000000000
#define MAXLEN 1010
#include<string.h>
int main()
{
	int a[MAXLEN],b[MAXLEN];
	int n;
	int i,j;
	int c=0;
	while(scanf("%d",&n)==1&&n)
	{
		printf("Game %d:\n",++c);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		while(1)
		{
			int result1=0;
			int result2=0;
			for(j=0;j<n;j++)
			{
				scanf("%d",&b[j]);
				if(a[j]==b[j]) result1++;
			}
			if(b[0]==0) break;
			int w,h;
			for(w=1;w<=9;w++)
			{
				int temp1=0,temp2=0;
				for(h=0;h<n;h++)
				{
					if(a[h]==w) temp1++;
					if(b[h]==w) temp2++;
				}
				if(temp1<temp2)
					result2+=temp1;
				else
					result2+=temp2;
			}
			printf("   (%d,%d)\n",result1,result2-result1);
		}
	}
	return 0;
}
