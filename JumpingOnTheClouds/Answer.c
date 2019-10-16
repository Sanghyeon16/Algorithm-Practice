#include <stdio.h>

int main()
{
	int i;
	int n;
	scanf("%d",&n);
	int c[100];
	for(i=0;i<n;i++)
	{
		scanf("%d", &c[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d", c[i]);
	}
	
	int curLoc = 0;
	int life = 1;
	int jump = 0;
	while(life)
	{
		if(c[curLoc + 1] == 1)
			curLoc += 2;
		else if((curLoc+2>=n)||(c[curLoc+2] == 1))
			{
				curLoc += 1;
			}
		else
			curLoc += 2;
		}
		
		jump += 1;
		printf("current path: %d\n",curLoc);
		if(curLoc >= n-1) life = 0;
	}
	
	printf("jump: %d\n",jump);




	return 0;
}
