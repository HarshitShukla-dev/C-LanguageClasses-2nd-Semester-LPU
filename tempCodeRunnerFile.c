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