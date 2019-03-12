#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

	short int s;
	int i;
	char ch;
	
	scanf("%hd %d %c", &s, &i, &ch);
	printf("%hd\n%d\n%c", s, i, ch);
	
	return 0;
}