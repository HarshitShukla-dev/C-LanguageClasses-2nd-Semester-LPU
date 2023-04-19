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
    if (file = fopen("FileHandling01.txt", "r"))
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

//_____________________________________________

#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("FileHandling01.txt", "a"))
    {
        if (fputs("He was a great personality.", file) >= 0)
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

//_____________________________________________

#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("FileHandling01.txt", "r+"))
    {
        printf("File opened successfully in read and write mode");
    }
    else
    {
        printf("Error in opening file");
    }
    fclose(file);
    return 0;
}

//_____________________________________________

#include <stdio.h>
int main()
{
    FILE *file;
    if (file = fopen("FileHandling01.txt", "r+"))
    {
        fputs("Home Address: Bangarmau, Unnao, Uttar-Pradesh India 209868\n", file);
        fputs("Current Address: C101 - Bh6, Lovely Professional University", file);
        printf("Done ...........");
    }
    else
    {
        printf("Error in opening file");
    }
    fclose(file);
    return 0;
}

//_____________________________________________

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

//_____________________________________________

#include <stdio.h>
int main()
{
    FILE *file;
    char str[500];
    if (file = fopen("FileHandling01.txt", "r"))
    {
        printf("%s", fgets(str, 10, file));
    }
    fclose(file);
    return 0;
}

//_____________________________________________

#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *file;
    char str;
    if (file = fopen("FileHandling01.txt", "r"))
    {
        while ((str = fgetc(file)) != EOF)
        {
            printf("%c", str);
        }
    }
    fclose(file);
    return 0;
}

//_____________________________________________