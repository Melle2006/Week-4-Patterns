/*Pattern1*/
#include <stdio.h>
int main()
{
	int i, j, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{for(j=0;j<i+1;j++)
	printf("*");
	printf("\n");
}
	return 0;
}
