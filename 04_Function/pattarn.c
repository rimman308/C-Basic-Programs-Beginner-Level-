#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of lines \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        //no of stars is 2*i+1
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}