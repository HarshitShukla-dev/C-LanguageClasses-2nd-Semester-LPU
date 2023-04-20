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
    while (ch = fgetc(fp))
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}