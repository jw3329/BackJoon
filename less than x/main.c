#include <stdio.h>

int main()
{
	int N;
	int X;

	scanf("%d",&N);
	scanf("%d",&X);
	for(int i=0;i<N;i++)
	{
		int num;
		scanf("%d",&num);

		if(num < X)
			printf("%d ",num);
	}

	putchar('\n');

	return 0;
}
