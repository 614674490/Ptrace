#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_int(int a)
{
    printf("Run demo = %d\n", a);

    return 0;
}

int main()
{
    printf("Debug demo\n");

    for (int i = 0; i < 10; i++)
    {
        print_int(i);
    }

    return 0;
}
