#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int ans=0;
    int c[101];
    memset(c,0,sizeof(c));
  
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
      scanf("%d", &t);
      c[t]++;
    }
    for(i=1; i<100; i++)
    {
      ans += (c[i]/2);
    }
    printf("%d",ans);
    return 0;
}
