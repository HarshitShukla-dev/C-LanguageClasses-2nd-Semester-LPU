#include <stdio.h>
int main(){
    FILE *file;
    char str[500];
    if (file = fopen("FileHandling01.txt", "r")){
        printf("%s",fgets(str,10,file));
    }
    fclose(file);
    return 0;
}