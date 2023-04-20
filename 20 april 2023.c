#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("FileHandling01.txt", "r");
    if (!fp)
    {
        printf("Error...!!!");
        return 0;
    }
    fseek(fp, 6, 0);
    char ch;
    while (fread(&ch, sizeof(ch), 1, fp) == 1)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}

//_____________________________________

#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("FileHandling01.txt", "w"))
    {
        if (fprintf(file, "He was a great personality.....") >= 0)
        {
            printf("Successfull");
        }
    }
    fclose(file);
    return 0;
}

//_____________________________________

#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("FileHandling01.txt", "w"))
    {
        fputc('H', file);
        printf("DONE......");
    }
    fclose(file);
    return 0;
}

//_____________________________________

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