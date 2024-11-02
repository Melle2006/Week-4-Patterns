/*Pattern15*/
#include <stdio.h>
int main()
{
	int i, j, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<n+1;i++)
	{
		for (j=1;j<i+1;)
		printf("%d ", j);
		printf("\n");
		j++;
	}
	return 0;
}
