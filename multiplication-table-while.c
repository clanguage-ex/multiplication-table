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