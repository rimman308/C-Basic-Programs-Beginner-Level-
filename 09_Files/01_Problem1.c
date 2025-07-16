#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("rahib.txt", "r");
    int num;
    // fscanf(ptr, "%d", &num);
    // printf("The value of num is %d  \n", num);

    // fscanf(ptr, "%d", &num);
    // printf("The value of num is %d  \n", num);

    // fscanf(ptr, "%d", &num);
    // printf("The value of num is %d  \n", num);

    // Other approch

    while (1)
    {
        num = fgetc(ptr);
        printf("%c ", num);

        if (num == EOF)
        {
            break;
        }
    }

    fclose(ptr);
    return 0;
}