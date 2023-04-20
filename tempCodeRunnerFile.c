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
        printf("\nEnter id : ");
        scanf("%d",&s1.id);
        printf("\nEnter name : ");
        scanf("%s",s1.name);
        printf("\nEnter mob : ");
        scanf("%lf",&s1.mob);

        fwrite(&s1,sizeof(s1),1,ptr);
        fseek(ptr,0,SEEK_SET);
        fread(&s2,sizeof(s2),1,ptr);
        printf("\nID: %d \nName: %s \nMobile Number: %.2lf",s2.id,s2.name,s2.mob);
        fclose(ptr);
        printf("File saved..");
    }
    return 0;
}