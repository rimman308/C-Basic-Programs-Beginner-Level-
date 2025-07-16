#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
};

int main()
{

    struct student s1;

    // s1.id = 59;
    // strcpy(s1.name, "rahib");

    struct student *ptr;
    ptr = &s1;

    ptr->id = 59;               // same as s1.id = 59;
    strcpy(ptr->name, "rahib"); // same as strcpy(s1.name, "rahib");

    printf("Id is %d and name is %s \n", ptr->id, ptr->name);

    return 0;
}