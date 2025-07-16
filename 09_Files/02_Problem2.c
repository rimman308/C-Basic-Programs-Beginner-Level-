#include <stdio.h>

int main()
{
    int num = 5;
    FILE *ptr;
    ptr = fopen("table.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d \n", num * (i + 1));
    }
    fclose(ptr);
    return 0;
}