#include<stdio.h>
#include<stdbool.h>

int main()
{
	bool dight_seen[10] = {false};
	int dight;
	long n;

	printf("enter a number: ");
	scanf("%ld",&n);

	while(n>>0)
	{
		dight = n % 10;
		if (dight_seen[dight])
		    break;
		dight_seen[dight] = true;
		n/10;
	}
	if(n> 0)
		printf("repeated dight\n");
	else
		printf("no repeated dight\n");

	return 0;
}

