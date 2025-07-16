#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("rahib.txt", "r");
    ptr2 = fopen("rahib2.txt", "a");
    while (1)
    {
        ch = fgetc(ptr1);
        // when all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}