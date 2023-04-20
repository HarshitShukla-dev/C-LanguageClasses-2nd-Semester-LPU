#include <stdio.h>
int main(){
    FILE *file;
    if (file = fopen("FileHandling01.txt", "w")){
        fputc('H',file);
    }
    fclose(file);
    return 0;
} 