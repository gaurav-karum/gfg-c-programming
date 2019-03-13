#include <stdio.h>

int main() 
{
	int m;
	scanf("%d",&m);
	
	if(m>12)
	{
	    printf("-1");
	    return 0;
	}
	
	if(m==2)
	    printf("28");
	else if(m == 1 || m==3 || m==5 || m==7 || m==10 || m==12)
	    printf("31");
	else
	    printf("30");

	return 0;
}