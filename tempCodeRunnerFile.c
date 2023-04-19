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