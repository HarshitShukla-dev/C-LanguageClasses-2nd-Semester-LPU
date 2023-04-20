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