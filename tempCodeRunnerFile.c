
#include <stdio.h>
int main(){
    FILE *file;
    if (file = fopen("FileHandling01.txt", "a")){
        fputc('\nH',file);
    }
    fclose(file);
    return 0;
} 