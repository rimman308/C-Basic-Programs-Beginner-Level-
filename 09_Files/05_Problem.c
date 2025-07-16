#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    ptr = fopen("number.txt", "r");
    fscanf(ptr, "%d", &num);

    fclose(ptr);

    ptr = fopen("number.txt", "a");
    fprintf(ptr, "%c",'\n');
    fprintf(ptr, "%d", 2 * num);

    fclose(ptr);

    return 0;
}