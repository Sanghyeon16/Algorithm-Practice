#include <stdio.h>
#include <string.h>

int main()
{
	long ans, q, r;
	int i,n;
		
	char* s = (char *)malloc(512000*sizeof(char));
	scanf("%s",s);
	
	scanf("%ld",&n);
	
	ans = 0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a')
			ans ++;
	}
	
	q = n/i;
	r = n%i;
	ans = ans*n;
	q=0;
	
	for(i = 0; i<r;i++)
	{
		if(s[i]=='a')
			q++;
	}
	ans += q;
	
	printf("%d\n",ans);
	
	
	return 0;
}
