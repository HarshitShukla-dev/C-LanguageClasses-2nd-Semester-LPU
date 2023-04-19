#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("hello.txt", "w"))
    {
        if (fputs("Swami Vivekanand....", file) >= 0)
        {
            printf("File opened successfully in write mode");
        }
        else
        {
            printf("Error in opening file");
        }
    }
    fclose(file);
    return 0;
}