#include<stdio.h>
#include<string.h>
#define maxlen 100
char q[maxlen];
char a[maxlen];
int left,win,lose,chance;
void guess(char ch)
{
	int flag=0;
	for(int i=0;i<strlen(q);i++)
	{
		if(q[i]==ch)
		{
			q[i]=' ';
			left--;
			flag=1;
//			printf("ok\n");
		}
	}
	if(!flag)
		chance--;
	if(!chance)
		lose=1;
	if(!left)
	{
		win=1;
	}
//	printf("left=%d\n",left);
}
int main()
{
	int n;	
	while(scanf("%d%s%s",&n,q,a)==3&&n!=-1)
	{
		win=lose=0;
		chance=7;
		left=strlen(q);
		printf("Round %d\n",n);
		for(int i=0;i<strlen(a);i++)
		{
			guess(a[i]);
			if(win||lose)
				break;
		}
		if(win)
			printf("You win.\n");
		else if(lose)
			printf("You lose.\n");
		else
			printf("You chickened out.\n");
	}
	return 0;
 } 
