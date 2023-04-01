#include <stdio.h>

int main()
{
	int num;

	printf("Enter the number you want multiplication table : ");
	scanf("%d", &num);

	printf("Table of %d\n", num);

	for (int i = 1; i <= 10; i++)
	{
		printf("%d X %d = %d \n", num, i, num * i);
	}

	return 0;
}