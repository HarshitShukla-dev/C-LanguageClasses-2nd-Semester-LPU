// File Handling

#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("FileHandling01.txt", "w"))
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

//_____________________________________________

#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("hello.txt", "r"))
    {
        printf("File opened successfully in read mode");
    }
    else
    {
        printf("Error in opening file");
    }
    fclose(file);
    return 0;
}