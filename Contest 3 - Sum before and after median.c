#include <stdio.h>

int main() 
{
	int t, n;
	scanf("%d",&t);
	
  while(t>0)
	{
    scanf("%d", &n);
    short int i, x=0, y=0;
    
    for(i=1; i<=n; i++)
    {
        if(i < n/2+1)
          x += i;
        else if(i > n/2 + 1)
          y += i;
    }
    
    printf("%d %d\n", x, y);
    t--;
	}
  
	return 0;
}