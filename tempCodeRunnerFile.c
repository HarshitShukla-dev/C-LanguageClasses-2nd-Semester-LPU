#include <stdio.h>
int main()
{
    FILE *file;
    char str[500];
    if (file = fopen("FileHandling01.txt", "r"))
    {
        while (fscanf(file, "%s", str) != EOF)
        {
            printf("%s", str);
        }
    }
    else
    {
        printf("Error in opening file");
    }
    fclose(file);
    return 0;
}
