#include <stdio.h>
int main(){
    FILE *file;
    if (file = fopen("FileHandling01.txt", "r+")){
        printf("File opened successfully in read and write mode");
    }
    else{
        printf("Error in opening file");
    }
    fclose(file);
    return 0;
}