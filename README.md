# multiplication-table
[multiplication table using for statement]

``` C
#include <stdio.h>
int main()
{
	for (int j = 1; j <=10; j++)
	{
		for (int i = 1; i <= 10; i++)
		{
			printf("%d X %d = %d \n", j, i, j * i);
		}
	}
	

	return 0;
}
```
[multiplication table using while statement]
``` C
#include <stdio.h>
int main()
{
    int num = 1, count = 1;

    while (num <= 10)
    {
        while (count <= 10)
        {
            printf("%d x %d = %d\n", num, count, (num * count));
            ++count;
        }
        count = 1;
        ++num;
    }
    

    return 0;
}
```
[multiplication table N by N]

``` C
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
```
