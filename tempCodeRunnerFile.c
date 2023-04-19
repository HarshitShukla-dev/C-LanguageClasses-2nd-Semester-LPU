#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *file;
    char str;
    if (file = fopen("FileHandling01.txt", "r"))
    {
        while((str=fgetc(file))!=EOF){
            printf("%c",str);
        }
    }
    fclose(file);
    return 0;
}
