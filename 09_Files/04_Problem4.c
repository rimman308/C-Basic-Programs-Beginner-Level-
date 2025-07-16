#include <stdio.h>

int main(){
     FILE *ptr;
     char name1[30],name2[30];
     int salary1 , salary2 ;
    ptr = fopen("rahib.txt", "a");

    printf("Enter the 1st name; \n");
    scanf("%s",name1);
    printf("Enter the 1st person salary: \n");
    scanf("%d",&salary1);
    
     printf("Enter the 2nd name; \n");
    scanf("%s",name2);
    printf("Enter the 2nd person salary: \n");
    scanf("%d",&salary2);

    fprintf(ptr, "%c",'\n');
    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",",");
    fprintf(ptr,"%d",salary1);
    fprintf(ptr, "%c",'\n');
    
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",",");
    fprintf(ptr,"%d",salary2);

    
    return 0;
}