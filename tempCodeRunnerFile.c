#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("FileHandling01.txt", "a"))
    {
        if (fputs("He was a great personality.",file) >= 0)
        {
            printf("File opened successfully in append mode");
        }
        else
        {
            printf("Error in opening file");
        }
    }
    fclose(file);
    return 0;
}