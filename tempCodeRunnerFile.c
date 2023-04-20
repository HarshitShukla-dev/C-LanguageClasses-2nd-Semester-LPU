#include <stdio.h>
int main()
{
    struct student
    {
        int id;
        char name[20];
        double mob;
    }s1,s2;

    FILE *ptr;
    ptr = fopen("FileHandling02.bin","wb+");
    if(ptr == NULL){
        printf("File not found");
    }
    else{
        printf("File created..");
        printf("Enter id : ");
        scanf("%d",&s1.id);
        printf("Enter name : ");
        scanf("%s",s1.name);
        printf("Enter mob : ");
        scanf("%lf",&s1.mob);
        fwrite(&s1,sizeof(s1),1,ptr);
        fclose(ptr);
        printf("File saved..");
    }
    
    FILE *file;
}