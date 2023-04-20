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
    while (fread(&ch,sizeof(ch),1,fp) == 1)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}

//_____________________________________

#include <stdio.h>
int main(){
    FILE *file;
    if(file=fopen("FileHandling01.txt","w")){
        if(fprintf(file,"He was a great personality.....")>=0){
            printf("Successfull");
        }
    }
    fclose(file);
    return 0;
}