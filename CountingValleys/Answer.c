#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char ar[1000000];
	int n;
	int seaLv = 0;
	int curLoc = 0;
	int mt = 0;
	int vly = 0;
	
	scanf("%d",&n);
	puts("1\n");
	
	scanf("%s",ar);

	for(i=0;i<n;i++)
	{	
		printf("%c ", ar[i]);
	}
	
	for(i=0;i<n+1;i++)
	{
		if(ar[i] == 'U')
		{
			curLoc += 1;
			if(curLoc==seaLv)
				vly += 1;	
		}
		else
		{
			curLoc -= 1;
			if(curLoc == seaLv)
				mt += 1;
		}
	}
	printf("Mountin: %d, Valley: %d\n", mt, vly);
	
	
	return 0;
}
